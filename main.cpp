#include "mainwindow.h"
#include <QApplication>
#include <QApplication>
#include <QDebug>
#include <QWebFrame>
#include <QWebPage>
#include <QWebView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
