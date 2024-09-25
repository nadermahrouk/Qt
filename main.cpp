#include <QApplication>
#include <QLabel>
#include <QWidget>
int main(int argc, char *argv[ ])
{
    QApplication app(argc, argv);
    QLabel hello("          Hello Nader");
    hello.setWindowTitle("First Qt Program EX1");
    hello.resize(200, 200);
    hello.show();
    return app.exec();
}
