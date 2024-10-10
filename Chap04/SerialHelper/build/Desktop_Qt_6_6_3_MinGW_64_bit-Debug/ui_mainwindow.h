/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *left_widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *set_groupBox;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *port_comboBox;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *rate_comboBox;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *dataBit_comboBox;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *stop_comboBox;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QComboBox *check_comboBox;
    QPushButton *check_pushButton;
    QPushButton *open_pushButton;
    QGroupBox *rec_groupBox;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *hex_rec_checkBox;
    QCheckBox *time_rec_checkBox;
    QPushButton *clear_rec_pushButton;
    QGroupBox *send_groupBox;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *hex_send_checkBox;
    QCheckBox *checkBox_3;
    QPushButton *clear_send_pushButton;
    QWidget *right_widget;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *rc_edit;
    QWidget *widget_8;
    QGridLayout *gridLayout;
    QTextEdit *send_edit;
    QPushButton *send_pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 600);
        MainWindow->setMinimumSize(QSize(600, 600));
        MainWindow->setMaximumSize(QSize(80000, 60000));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(600, 600));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        left_widget = new QWidget(centralwidget);
        left_widget->setObjectName("left_widget");
        verticalLayout = new QVBoxLayout(left_widget);
        verticalLayout->setObjectName("verticalLayout");
        set_groupBox = new QGroupBox(left_widget);
        set_groupBox->setObjectName("set_groupBox");
        verticalLayout_2 = new QVBoxLayout(set_groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(set_groupBox);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(widget_3);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        port_comboBox = new QComboBox(widget_3);
        port_comboBox->setObjectName("port_comboBox");

        horizontalLayout_2->addWidget(port_comboBox);


        verticalLayout_2->addWidget(widget_3);

        widget_5 = new QWidget(set_groupBox);
        widget_5->setObjectName("widget_5");
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        rate_comboBox = new QComboBox(widget_5);
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->addItem(QString());
        rate_comboBox->setObjectName("rate_comboBox");

        horizontalLayout_3->addWidget(rate_comboBox);


        verticalLayout_2->addWidget(widget_5);

        widget_7 = new QWidget(set_groupBox);
        widget_7->setObjectName("widget_7");
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        label_3 = new QLabel(widget_7);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        dataBit_comboBox = new QComboBox(widget_7);
        dataBit_comboBox->addItem(QString());
        dataBit_comboBox->addItem(QString());
        dataBit_comboBox->addItem(QString());
        dataBit_comboBox->addItem(QString());
        dataBit_comboBox->setObjectName("dataBit_comboBox");

        horizontalLayout_4->addWidget(dataBit_comboBox);


        verticalLayout_2->addWidget(widget_7);

        widget_4 = new QWidget(set_groupBox);
        widget_4->setObjectName("widget_4");
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        stop_comboBox = new QComboBox(widget_4);
        stop_comboBox->addItem(QString());
        stop_comboBox->addItem(QString());
        stop_comboBox->addItem(QString());
        stop_comboBox->setObjectName("stop_comboBox");

        horizontalLayout_5->addWidget(stop_comboBox);


        verticalLayout_2->addWidget(widget_4);

        widget_6 = new QWidget(set_groupBox);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(5, 5, 5, 5);
        label_5 = new QLabel(widget_6);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        check_comboBox = new QComboBox(widget_6);
        check_comboBox->addItem(QString());
        check_comboBox->addItem(QString());
        check_comboBox->addItem(QString());
        check_comboBox->setObjectName("check_comboBox");

        horizontalLayout_6->addWidget(check_comboBox);


        verticalLayout_2->addWidget(widget_6);

        check_pushButton = new QPushButton(set_groupBox);
        check_pushButton->setObjectName("check_pushButton");

        verticalLayout_2->addWidget(check_pushButton);

        open_pushButton = new QPushButton(set_groupBox);
        open_pushButton->setObjectName("open_pushButton");

        verticalLayout_2->addWidget(open_pushButton);


        verticalLayout->addWidget(set_groupBox);

        rec_groupBox = new QGroupBox(left_widget);
        rec_groupBox->setObjectName("rec_groupBox");
        verticalLayout_5 = new QVBoxLayout(rec_groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget_10 = new QWidget(rec_groupBox);
        widget_10->setObjectName("widget_10");
        verticalLayout_8 = new QVBoxLayout(widget_10);
        verticalLayout_8->setObjectName("verticalLayout_8");
        hex_rec_checkBox = new QCheckBox(widget_10);
        hex_rec_checkBox->setObjectName("hex_rec_checkBox");
        hex_rec_checkBox->setChecked(false);
        hex_rec_checkBox->setTristate(false);

        verticalLayout_8->addWidget(hex_rec_checkBox);

        time_rec_checkBox = new QCheckBox(widget_10);
        time_rec_checkBox->setObjectName("time_rec_checkBox");

        verticalLayout_8->addWidget(time_rec_checkBox);

        clear_rec_pushButton = new QPushButton(widget_10);
        clear_rec_pushButton->setObjectName("clear_rec_pushButton");

        verticalLayout_8->addWidget(clear_rec_pushButton);


        verticalLayout_5->addWidget(widget_10);


        verticalLayout->addWidget(rec_groupBox);

        send_groupBox = new QGroupBox(left_widget);
        send_groupBox->setObjectName("send_groupBox");
        verticalLayout_6 = new QVBoxLayout(send_groupBox);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget_12 = new QWidget(send_groupBox);
        widget_12->setObjectName("widget_12");
        verticalLayout_7 = new QVBoxLayout(widget_12);
        verticalLayout_7->setObjectName("verticalLayout_7");
        hex_send_checkBox = new QCheckBox(widget_12);
        hex_send_checkBox->setObjectName("hex_send_checkBox");

        verticalLayout_7->addWidget(hex_send_checkBox);

        checkBox_3 = new QCheckBox(widget_12);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_7->addWidget(checkBox_3);

        clear_send_pushButton = new QPushButton(widget_12);
        clear_send_pushButton->setObjectName("clear_send_pushButton");

        verticalLayout_7->addWidget(clear_send_pushButton);


        verticalLayout_6->addWidget(widget_12);


        verticalLayout->addWidget(send_groupBox);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        horizontalLayout->addWidget(left_widget);

        right_widget = new QWidget(centralwidget);
        right_widget->setObjectName("right_widget");
        verticalLayout_3 = new QVBoxLayout(right_widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_9 = new QWidget(right_widget);
        widget_9->setObjectName("widget_9");
        verticalLayout_4 = new QVBoxLayout(widget_9);
        verticalLayout_4->setObjectName("verticalLayout_4");
        rc_edit = new QPlainTextEdit(widget_9);
        rc_edit->setObjectName("rc_edit");

        verticalLayout_4->addWidget(rc_edit);


        verticalLayout_3->addWidget(widget_9);

        widget_8 = new QWidget(right_widget);
        widget_8->setObjectName("widget_8");
        gridLayout = new QGridLayout(widget_8);
        gridLayout->setObjectName("gridLayout");
        send_edit = new QTextEdit(widget_8);
        send_edit->setObjectName("send_edit");

        gridLayout->addWidget(send_edit, 0, 0, 1, 1);

        send_pushButton = new QPushButton(widget_8);
        send_pushButton->setObjectName("send_pushButton");

        gridLayout->addWidget(send_pushButton, 0, 1, 1, 1);


        verticalLayout_3->addWidget(widget_8);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout->addWidget(right_widget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        set_groupBox->setTitle(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\253\257  \345\217\243", nullptr));
        port_comboBox->setCurrentText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        rate_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1200", nullptr));
        rate_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2400", nullptr));
        rate_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "4800", nullptr));
        rate_comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "9600", nullptr));
        rate_comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "19200", nullptr));
        rate_comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "38400", nullptr));
        rate_comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "57600", nullptr));
        rate_comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "115200", nullptr));

        rate_comboBox->setCurrentText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        dataBit_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "5", nullptr));
        dataBit_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "6", nullptr));
        dataBit_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "7", nullptr));
        dataBit_comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "8", nullptr));

        dataBit_comboBox->setCurrentText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        stop_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        stop_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "1.5", nullptr));
        stop_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        check_comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "none", nullptr));
        check_comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", nullptr));
        check_comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", nullptr));

        check_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\344\270\262\345\217\243", nullptr));
        open_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        rec_groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\350\256\276\347\275\256", nullptr));
        hex_rec_checkBox->setText(QCoreApplication::translate("MainWindow", "Hex\346\216\245\346\224\266", nullptr));
        time_rec_checkBox->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264\346\210\263", nullptr));
        clear_rec_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        send_groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\350\256\276\347\275\256", nullptr));
        hex_send_checkBox->setText(QCoreApplication::translate("MainWindow", "Hex\345\217\221\351\200\201", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        clear_send_pushButton->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201", nullptr));
        send_pushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
