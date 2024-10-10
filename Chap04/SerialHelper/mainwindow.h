#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QString>
#include <QSerialPortInfo>
#include <QMessageBox>
#include <QTimer>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QSerialPort *serialPort;//定义串口指针


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_check_pushButton_clicked();

    void on_open_pushButton_clicked();

    void on_clear_rec_pushButton_clicked();

    void on_send_pushButton_clicked();

    void on_clear_send_pushButton_clicked();

    void serial_read();

private:
    Ui::MainWindow *ui;

    // 发送，接字节计数
    long send_cnt,rec_cnt;

    // 定时器
    QTimer *timSend;


};
#endif // MAINWINDOW_H
