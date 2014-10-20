#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include<QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
       QLabel *output;
      QPushButton *one;
      QPushButton *two;
      QPushButton *three;
      QPushButton *four;
      QPushButton *five;
      QPushButton *six;
      QPushButton *seven;
      QPushButton *eight;
      QPushButton *nine;
      QPushButton *zero;
private slots:
  void onefunc();
  void twofunc();
  void threefunc();
  void fourfunc();
  void fivefunc();
void sixfunc();
void sevenfunc();
void eightfunc();
void ninefunc();
void zerofunc();
};


#endif // MAINWINDOW_H
