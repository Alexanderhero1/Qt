#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmath.h"

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
    int a = ui->lineEdit->text().toInt();
    int b = ui->lineEdit_2->text().toInt();
    int c = ui->lineEdit_3->text().toInt();

    int d = (qPow(b,2)-(4*(a*c)));//Дискриминат
    int x1;
    int x2;

 if(d>0)
 {
    x1=((-b)-qSqrt(d))/(2*a);//корень 1
    x2=((-b)+qSqrt(d))/(2*a);//корень 2

    QString answer = QString::number(x1,10);
    ui->lineEdit_4->setText(answer);

    QString answer2 = QString::number(x2,10);
    ui->lineEdit_5->setText(answer2);
 }
else if(d==0)
 {
    x1=(-b)/(2*a);
    x2=x1;
    QString answer = QString::number(x1,10);
    ui->lineEdit_4->setText(answer);

    QString answer2 = QString::number(x2,10);
    ui->lineEdit_5->setText(answer2);

 }
else if (d<0)
 {
     ui->lineEdit_4->setText("no roots");
     ui->lineEdit_5->setText("no roots");
 }
}

