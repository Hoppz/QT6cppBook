/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->setWindowModality(Qt::WindowModality::NonModal);
        Widget->resize(300, 119);
        Widget->setMaximumSize(QSize(300, 119));
        Widget->setCursor(QCursor(Qt::ArrowCursor));
        Widget->setAutoFillBackground(false);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 171, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        btnClose = new QPushButton(Widget);
        btnClose->setObjectName("btnClose");
        btnClose->setGeometry(QRect(190, 90, 65, 23));

        retranslateUi(Widget);
        QObject::connect(btnClose, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Second widge", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Hello QT6", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
