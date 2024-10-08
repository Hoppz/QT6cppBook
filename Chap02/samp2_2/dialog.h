#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    // go to slot 生成的槽函数
    void on_checkBoxUnder_clicked(bool checked);

    void on_checkBoxItailc_clicked(bool checked);

    void on_checkBoxBold_clicked(bool checked);

    void on_btnClear_clicked();

    // 自定义槽函数
    void do_setFontColor();


private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
