#-------------------------------------------------
#
# Project created by QtCreator 2023-02-10T22:47:11
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4) {
    QT += widgets
    QT += webkitwidgets
} else {
    QT += webkit
}

TARGET = myBrowser
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qwebviewcpp.cpp

HEADERS  += mainwindow.h \
    qwebview.h \
    qwebviewcpp.h

FORMS    += mainwindow.ui
