#ifndef MYQMLCLASS_H
#define MYQMLCLASS_H

#include <QObject>

class MyQmlClass : public QObject
{
    Q_OBJECT
public:
    explicit MyQmlClass(QObject *parent = nullptr);

    // Q_INVOKABLE
    // Q_INVOKABLE 是个宏定义，这个宏将函数 声明为元对象系统可调用的函数。
    Q_INVOKABLE void setValue(int value);
    Q_INVOKABLE int  getValue();

private:
    int m_Value;

signals:
};

#endif // MYQMLCLASS_H
