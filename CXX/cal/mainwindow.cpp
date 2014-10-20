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
