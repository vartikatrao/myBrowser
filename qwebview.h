#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <QWebView>

class WebView : public QWebView
{
    Q_OBJECT

    public:
        WebView(QWidget *parent = 0);
    private slots:
        void handleSslErrors(QNetworkReply* reply, const QList<QSslError> &errors);
};

#endif // WEBVIEW_H
