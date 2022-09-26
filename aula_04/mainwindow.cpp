#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox.h"

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
    QMessageBox::question(this, "CFB_Cursos", "Você está gostando do curso?");
}

