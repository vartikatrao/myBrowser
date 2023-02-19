#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->webView->load(QUrl(ui->urlEdit->text()));
}

void MainWindow::on_urlEdit_returnPressed()
{
    on_pushButton_clicked();
}

void MainWindow::on_webView_loadStarted()
{
    ui->statusBar->showMessage("Loading URL");
}

void MainWindow::on_webView_loadFinished(bool arg1)
{
    if (arg1)
    {
        ui->statusBar->showMessage("Load success");
        ui->urlEdit->setText(ui->webView->url().toString());
    }
    else{
        ui->statusBar->showMessage("showing google results");
        ui->webView->load(QUrl("http://www.google.com.sg/search?sourceid=chrome&ie=UTF-8&q="+ui->urlEdit->text()));
    }
}
