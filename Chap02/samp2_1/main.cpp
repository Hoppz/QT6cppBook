#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 定义并创建应用程序
    QApplication a(argc, argv);
    // 定义并创建窗口对象
    Widget w;
    // 显示窗口
    w.show();
    // 运行应用程序，开始应用程序的消息循环和事件处理。
    return a.exec();
}
