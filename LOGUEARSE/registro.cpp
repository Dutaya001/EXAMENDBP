#include "registro.h"
#include "ui_registro.h"
#include "QDebug"
#include "QString"
Registro::Registro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registro)
{
    ui->setupUi(this);
}

Registro::~Registro()
{
    delete ui;
}

void Registro::on_pushButton_clicked()
{
    QString nom=ui->nom->text();
    QString contra=ui->contra->text();
    QString telefono=ui->contra->text();
    QString direccion=ui->contra->text();
    qDebug()<<nom;
    qDebug()<<contra;
    qDebug()<<telefono;
    qDebug()<<direccion;
}

