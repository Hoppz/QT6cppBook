#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QSerialPortInfo"
#include <QSerialPort>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 存储获取到的端口名称
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);
    // 清空之前获取到的端口列表
    ui->port_comboBox->clear();
    // 查询可用串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts() ){
        // 可用的串口添加到列表中
        ui->port_comboBox->addItem(info.portName());
    }

    // 清空接收，发送计数
    send_cnt = rec_cnt = 0;

    // 接收数据槽函数
    connect( serialPort, SIGNAL(readyRead()),this, SLOT(serial_read()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 接收数据槽函数
void MainWindow::serial_read()
{
    QByteArray rec_buf = serialPort->readAll();
    // 输出到 editor 中的字符串
    QString str_rec;

    // 接收字节计数
    rec_cnt += rec_buf.size();

    // 处理时间戳 复选框
    if( ui->time_rec_checkBox->isChecked() ){
        str_rec = "[" + QString(ui->port_comboBox->currentText()) + " " +
                  QDateTime::currentDateTime().toString("hh:mm:ss")
                  + "] ";
        // str_rec += QString(rec_buf).append("\r\n");
    }

    // 处理 hex 格式
    if( ui->hex_rec_checkBox->isChecked() ){
        QString te_str = rec_buf.toHex().toUpper();
        QString out_str;

        for(int i = 0 ; i < te_str.length() ; i+=2){
            out_str += te_str.mid(i,2) + " ";
        }

        str_rec.append(out_str);
    } else {
        str_rec.append(rec_buf.toStdString());
    }

    // 处理时间戳 复选框 结尾
    if( ui->time_rec_checkBox->isChecked() ){
        str_rec.append("\r\n");
    }

    ui->rc_edit->insertPlainText(str_rec);
    // 移动光标到最后
    ui->rc_edit->moveCursor(QTextCursor::End);
}

// 清空接收按钮——槽函数
void MainWindow::on_clear_rec_pushButton_clicked()
{
    ui->rc_edit->clear();
}

// 检测端口按钮——槽函数
void MainWindow::on_check_pushButton_clicked()
{
    ui->port_comboBox->clear();

    // 查询可用串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts() ){
        // 可用的串口添加到列表中
        ui->port_comboBox->addItem(info.portName());
    }

}

// 打开端口按钮——槽函数
void MainWindow::on_open_pushButton_clicked()
{
    // 串口初始化
    QSerialPort::BaudRate baudRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    // 波特率
    if( ui->rate_comboBox->currentText() == "1200" ){
        baudRate = QSerialPort::Baud1200;
    } else if( ui->rate_comboBox->currentText() == "2400" ){
        baudRate = QSerialPort::Baud2400;
    } else if( ui->rate_comboBox->currentText() == "4800" ){
        baudRate = QSerialPort::Baud4800;
    } else if( ui->rate_comboBox->currentText() == "9600" ){
        baudRate = QSerialPort::Baud9600;
    } else if( ui->rate_comboBox->currentText() == "38400" ){
        baudRate = QSerialPort::Baud38400;
    } else if( ui->rate_comboBox->currentText() == "57600" ){
        baudRate = QSerialPort::Baud57600;
    } else if( ui->rate_comboBox->currentText() == "115200" ){
        baudRate = QSerialPort::Baud115200;
    }

    // 数据位
    if( ui->dataBit_comboBox->currentText() == "5" ){
        dataBits = QSerialPort::Data5;
    } else if( ui->dataBit_comboBox->currentText() == "6" ){
        dataBits = QSerialPort::Data6;
    } else if( ui->dataBit_comboBox->currentText() == "7" ){
        dataBits = QSerialPort::Data7;
    } else if( ui->dataBit_comboBox->currentText() == "8" ){
        dataBits = QSerialPort::Data8;
    }

    // 停止位
    if( ui->stop_comboBox->currentText() == "1" ){
        stopBits = QSerialPort::OneStop;
    } else if( ui->stop_comboBox->currentText() == "1.5" ){
        stopBits = QSerialPort::OneAndHalfStop;
    } else if( ui->stop_comboBox->currentText() == "2" ){
        stopBits = QSerialPort::TwoStop;
    }

    // 校验位
    if( ui->check_comboBox->currentText() == "none" ){
        checkBits = QSerialPort::NoParity;
    } else if( ui->check_comboBox->currentText() == "奇校验" ){
        checkBits = QSerialPort::OddParity;
    } else if( ui->check_comboBox->currentText() == "偶校验" ){
        checkBits = QSerialPort::EvenParity;
    }

    // 初始化
    serialPort->setPortName(ui->port_comboBox->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);

    if( ui-> open_pushButton->text() == "打开串口" ){
        if( serialPort->open( QIODevice::ReadWrite) == true  ){
            ui -> open_pushButton->setText("关闭串口");
            // 让端口号下拉框不可选，避免误操作
            //（选择功能不可用，控件背景为灰色）
            ui->port_comboBox->setEnabled(false);
        } else {
            QMessageBox::critical(this, "错误提示", "串口打开失败！！！\r\n该串口可能被占用\r\n请选择正确的串口");
        }
    } else {
        // 关闭串口
        serialPort->close();
        ui -> open_pushButton->setText("打开串口");
        ui->port_comboBox->setEnabled(true);
    }

}

// 发送按钮——槽函数
void MainWindow::on_send_pushButton_clicked()
{
    QByteArray send_arr;

    // 处理 Hex 复选框
    if( ui-> hex_send_checkBox->isChecked() ){
        send_arr = QByteArray::fromHex( ui->send_edit->toPlainText().toUtf8()).data();
    } else {
        send_arr = ui->send_edit->toPlainText().toLocal8Bit().data();
    }
    // 如发送成功，会返回发送的字节长度。失败，返回-1。
    int send_flag = serialPort->write(send_arr);

    if( send_flag > 0 ){
        send_cnt += send_flag;
    }
}

// 清空发送按钮——槽函数
void MainWindow::on_clear_send_pushButton_clicked()
{
    ui->send_edit->clear();
}

