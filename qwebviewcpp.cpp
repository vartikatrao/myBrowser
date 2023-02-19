#include "qwebview.h"
#include <QNetworkReply>
#include <QtDebug>
#include <QSslError>

WebView::WebView(QWidget *parent) :
    QWebView(parent)
{
    load(QUrl("https://gmail.com"));

    connect(page()->networkAccessManager(),
            SIGNAL(sslErrors(QNetworkReply*, const QList<QSslError> & )),
            this,
            SLOT(handleSslErrors(QNetworkReply*, const QList<QSslError> & )));
}

void WebView::handleSslErrors(QNetworkReply* reply, const QList<QSslError> &errors)
{
    qDebug() << "handleSslErrors: ";
    foreach (QSslError e, errors)
    {
        qDebug() << "ssl error: " << e;
    }

    reply->ignoreSslErrors();
}
