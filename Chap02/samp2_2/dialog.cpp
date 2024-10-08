#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // 自定义的槽函数不会自动 connect 按钮的 clicked() 函数
    // 手动关联
    connect(ui->radioBlack, SIGNAL(clicked()), this, SLOT(do_setFontColor()));
    connect(ui->radioRed, SIGNAL(clicked()), this, SLOT(do_setFontColor()));
    connect(ui->radioBlue, SIGNAL(clicked()), this, SLOT(do_setFontColor()));
}

Dialog::~Dialog()
{
    delete ui;
}


// underline 复选框
void Dialog::on_checkBoxUnder_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

// Itailc 复选框
void Dialog::on_checkBoxItailc_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

// Bold 复选框
void Dialog::on_checkBoxBold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}


void Dialog::on_btnClear_clicked()
{
    // 文字 + 样式都会清空
    // ui->plainTextEdit->clear();

    // 回复初始的样子

}

// 自定义槽函数
void Dialog::do_setFontColor()
{
    QPalette plet = ui->plainTextEdit->palette();

    if( ui->radioBlue -> isChecked() )
        plet.setColor(QPalette::Text, Qt::blue);
    else if( ui->radioRed -> isChecked() )
        plet.setColor(QPalette::Text, Qt::red);
    else if( ui->radioBlack -> isChecked() )
        plet.setColor(QPalette::Text, Qt::black);

    ui->plainTextEdit->setPalette(plet);
}


