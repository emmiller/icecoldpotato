#include "mainwindow.h"
#include "ui_mainwindow.h"

QString username = "MrCool";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->userlist->append(username);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sendButton_clicked()
{
    if (ui->msg->toPlainText() != "") {
        ui->chat->append(username + ": " + ui->msg->toPlainText());
        ui->msg->setText("");
    }
}

void MainWindow::on_quitButton_clicked()
{
    exit(0);
}
