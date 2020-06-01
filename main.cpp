#include <QGuiApplication>
#include <QQuickView>

int main(int argc, char *argv[])
{
    qputenv("QSG_INFO", "1");
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQuickView view;
    view.setColor(Qt::black);
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.resize(1280, 720);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    int r = app.exec();

    return r;
}