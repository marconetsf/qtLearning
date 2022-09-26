#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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
    QMessageBox::critical(this, "CFB_Cursos", "Erro do tipo critical");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "CFB_Cursos", "Erro do tipo about");
}



void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::aboutQt(this, "CFB_Cursos");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "CFB_Cursos", "Erro do tipo information");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton resposta;
    resposta = (QMessageBox::question(this, "", "Você está gostando do curso?", QMessageBox::Yes|QMessageBox::No));

    if (resposta == QMessageBox::Yes)
    {
        QApplication::quit();
    }else {
//        QMessageBox::about(this, "CFB_Cursos", "O programa não foi fechado");
        qDebug() << "Programa não foi fechado";
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this, "CBF_Crusos", "Erro do tipo warning");
}

