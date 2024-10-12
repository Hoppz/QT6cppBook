#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "myqmlclass.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // 声明对象
    MyQmlClass myQmlClass;
    // 将对象注册到 QML 中
    // setContextProperty 函数其实就是设置一个属性，参数就是 key-value
    engine.rootContext()->setContextProperty("myQmlClass",&myQmlClass);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Qml_Cpp_test", "Main");


    return app.exec();
}
