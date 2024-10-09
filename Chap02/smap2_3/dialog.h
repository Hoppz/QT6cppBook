#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QRadioButton>

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QCheckBox *checkBoxUnder;
    QCheckBox *checkBoxItalic;
    QCheckBox *checkBoxBold;

    QRadioButton
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
