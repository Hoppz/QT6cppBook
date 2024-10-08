/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_font;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxItailc;
    QCheckBox *checkBoxBold;
    QGroupBox *groupBox_color;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioBlack;
    QRadioButton *radioBlue;
    QRadioButton *radioRed;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnClear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOk;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnExit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(316, 317);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_font = new QGroupBox(Dialog);
        groupBox_font->setObjectName("groupBox_font");
        horizontalLayout_2 = new QHBoxLayout(groupBox_font);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBoxUnder = new QCheckBox(groupBox_font);
        checkBoxUnder->setObjectName("checkBoxUnder");

        horizontalLayout_2->addWidget(checkBoxUnder);

        checkBoxItailc = new QCheckBox(groupBox_font);
        checkBoxItailc->setObjectName("checkBoxItailc");

        horizontalLayout_2->addWidget(checkBoxItailc);

        checkBoxBold = new QCheckBox(groupBox_font);
        checkBoxBold->setObjectName("checkBoxBold");

        horizontalLayout_2->addWidget(checkBoxBold);


        verticalLayout->addWidget(groupBox_font);

        groupBox_color = new QGroupBox(Dialog);
        groupBox_color->setObjectName("groupBox_color");
        horizontalLayout = new QHBoxLayout(groupBox_color);
        horizontalLayout->setObjectName("horizontalLayout");
        radioBlack = new QRadioButton(groupBox_color);
        radioBlack->setObjectName("radioBlack");

        horizontalLayout->addWidget(radioBlack);

        radioBlue = new QRadioButton(groupBox_color);
        radioBlue->setObjectName("radioBlue");

        horizontalLayout->addWidget(radioBlue);

        radioRed = new QRadioButton(groupBox_color);
        radioRed->setObjectName("radioRed");

        horizontalLayout->addWidget(radioRed);


        verticalLayout->addWidget(groupBox_color);

        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setLineWrapMode(QPlainTextEdit::LineWrapMode::WidgetWidth);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnClear = new QPushButton(Dialog);
        btnClear->setObjectName("btnClear");

        horizontalLayout_3->addWidget(btnClear);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnOk = new QPushButton(Dialog);
        btnOk->setObjectName("btnOk");

        horizontalLayout_3->addWidget(btnOk);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnExit = new QPushButton(Dialog);
        btnExit->setObjectName("btnExit");

        horizontalLayout_3->addWidget(btnExit);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(checkBoxUnder, checkBoxItailc);
        QWidget::setTabOrder(checkBoxItailc, checkBoxBold);
        QWidget::setTabOrder(checkBoxBold, radioBlack);
        QWidget::setTabOrder(radioBlack, radioBlue);
        QWidget::setTabOrder(radioBlue, radioRed);
        QWidget::setTabOrder(radioRed, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, btnClear);
        QWidget::setTabOrder(btnClear, btnOk);
        QWidget::setTabOrder(btnOk, btnExit);

        retranslateUi(Dialog);
        QObject::connect(btnOk, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(btnExit, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox_font->setTitle(QCoreApplication::translate("Dialog", "\345\255\227\344\275\223", nullptr));
        checkBoxUnder->setText(QCoreApplication::translate("Dialog", "Under", nullptr));
        checkBoxItailc->setText(QCoreApplication::translate("Dialog", "Itailc", nullptr));
        checkBoxBold->setText(QCoreApplication::translate("Dialog", "Bold", nullptr));
        groupBox_color->setTitle(QCoreApplication::translate("Dialog", "\351\242\234\350\211\262", nullptr));
        radioBlack->setText(QCoreApplication::translate("Dialog", "Black", nullptr));
        radioBlue->setText(QCoreApplication::translate("Dialog", "Blue", nullptr));
        radioRed->setText(QCoreApplication::translate("Dialog", "Red", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Dialog", "Qt 6 C++ \345\274\200\345\217\221\346\214\207\345\215\227_Hoppz", nullptr));
        btnClear->setText(QCoreApplication::translate("Dialog", "\346\270\205\347\251\272", nullptr));
        btnOk->setText(QCoreApplication::translate("Dialog", "\347\241\256\345\256\232", nullptr));
        btnExit->setText(QCoreApplication::translate("Dialog", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
