#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Registro *registro = new Registro(0);
    registro->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    Login *login = new Login(0);
    login->show();
}

