#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <string.h>
#include <QPushButton>
#include <QString>
#include <QByteArray>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    output = new QLabel("",this);
       one = new QPushButton("1",this);
       two = new QPushButton("2",this);
       three = new QPushButton("3",this);
       four = new QPushButton("4",this);
       five = new QPushButton("5",this);
       six = new QPushButton("6",this);
       seven = new QPushButton("7",this);
       eight = new QPushButton("8",this);
       nine = new QPushButton("9",this);
       zero = new QPushButton("0",this);
       add = new QPushButton("+",this);
       sub = new QPushButton("-",this);
       mult = new QPushButton("X",this);
       div = new QPushButton("/",this);
       equ = new QPushButton("=",this);
      one->setGeometry(0,0,50,50);
      two->setGeometry(55,0,50,50);
      three->setGeometry(110,0,50,50);
      four->setGeometry(0,55,50,50);
      five->setGeometry(55,55,50,50);
      six->setGeometry(110,55,50,50);
      seven->setGeometry(0,110,50,50);
      eight->setGeometry(55,110,50,50);
      nine->setGeometry(110,110,50,50);
      zero->setGeometry(55,165,50,50);
      add->setGeometry(0,165,50,50);
      sub->setGeometry(110,165,50,50);
      mult->setGeometry(0,220,50,50);
      div->setGeometry(110,220,50,50);
      equ->setGeometry(55,220,50,50);
      output->setGeometry(0,300,200,10);
      connect(one,SIGNAL(clicked()),this,SLOT(onefunc()));
      connect(two,SIGNAL(clicked()),this,SLOT(twofunc()));
      connect(three,SIGNAL(clicked()),this,SLOT(threefunc()));
      connect(four,SIGNAL(clicked()),this,SLOT(fourfunc()));
      connect(five,SIGNAL(clicked()),this,SLOT(fivefunc()));
      connect(six,SIGNAL(clicked()),this,SLOT(sixfunc()));
      connect(seven,SIGNAL(clicked()),this,SLOT(sevenfunc()));
      connect(eight,SIGNAL(clicked()),this,SLOT(eightfunc()));
      connect(nine,SIGNAL(clicked()),this,SLOT(ninefunc()));
      connect(zero,SIGNAL(clicked()),this,SLOT(zerofunc()));
      connect(add,SIGNAL(clicked()),this,SLOT(addf()));
      connect(sub,SIGNAL(clicked()),this,SLOT(subf()));
      connect(mult,SIGNAL(clicked()),this,SLOT(multf()));
      connect(div,SIGNAL(clicked()),this,SLOT(divf()));
      connect(equ,SIGNAL(clicked()),this,SLOT(equf()));

}

MainWindow::~MainWindow()
{

}
void MainWindow::onefunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"1");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::twofunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"2");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::threefunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"3");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::fourfunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"4");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::fivefunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"5");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::sixfunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"6");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::sevenfunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"7");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::eightfunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"8");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::ninefunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"9");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::zerofunc()
{
    QString c = output->text();
    char s[80];
    QByteArray a = c.toUtf8();
     const char *ot1 = a.data();

     strcpy(s,ot1);
     strcat(s,"0");
    QString cf = (QString)s;
     output->setText(cf);
}
void MainWindow::addf(){
    QString c = output->text();
    QByteArray a = c.toUtf8();
const char *ot1 = a.data();
    num1 = output->text();
    badd = true;

    output->setText("");
}
void MainWindow::subf(){
    QString c = output->text();
    QByteArray a = c.toUtf8();
    const char *ot1 = a.data();
       num1 = output->text();

    bsub = true;
    output->setText("");
}
void MainWindow::divf(){
    QString c = output->text();
    QByteArray a = c.toUtf8();
    const char *ot1 = a.data();
     num1 = output->text();

    bdiv = true;

    output->setText("");
}
void MainWindow::multf()
{
    QString c = output->text();
    QByteArray a = c.toUtf8();
    const char *ot1 = a.data();
  num1 = output->text();

    bmult = true;

    output->setText("");
}
void MainWindow::equf()
{
    QString c = output->text();
    QByteArray a = c.toUtf8();
    const char *ot1 = a.data();
        num2 = output->text();
    if (badd == true)
    {
        QString ch1 = num1;
        QByteArray a123 = ch1.toUtf8();
        const char* something = a123.data();
        QString ch2 = num2;
        QByteArray b123 = ch2.toUtf8();
        const char* something1 = b123.data();
        int a = atoi(something);
        int b = atoi(something1);
        int x = (a+b);
        QString ch = QString::number(x);
        output->setText(ch);

    }
    else if(bmult == true)
    {
        QString ch1 = num1;
        QByteArray a123 = ch1.toUtf8();
        const char* something = a123.data();
        QString ch2 = num2;
        QByteArray b123 = ch2.toUtf8();
        const char* something1 = b123.data();
        int a = atoi(something);
        int b = atoi(something1);
        int x = (a*b);
        QString ch = QString::number(x);
        output->setText(ch);
    }
    else if(bsub == true)
    {
        QString ch1 = num1;
        QByteArray a123 = ch1.toUtf8();
        const char* something = a123.data();
        QString ch2 = num2;
        QByteArray b123 = ch2.toUtf8();
        const char* something1 = b123.data();
        int a = atoi(something);
        int b = atoi(something1);
        int x = (a-b);
        QString ch = QString::number(x);
        output->setText(ch);
    }
    else if(bdiv == true)
    {
        QString ch1 = num1;
        QByteArray a123 = ch1.toUtf8();
        const char* something = a123.data();
        QString ch2 = num2;
        QByteArray b123 = ch2.toUtf8();
        const char* something1 = b123.data();
        int a = atoi(something);
        int b = atoi(something1);
        int x = (a/b);
        QString ch = QString::number(x);
        output->setText(ch);
    }
}
