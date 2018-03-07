/**
  * Author: SAHIL SHARMA
  * Created On: March 2, 2018
  * Project:
  */

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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
//    Remeber to import QMessageBox class before using any function or method for message box.

//    Different types of messages:
//    void              about           ->      show a normal message box. Takes 3 arguments.
//    void              aboutQt         ->      shows information about Qt. Takes 2 arguments.
//    StandardButton    critical        ->      shows critical icon
//    StandardButton    inforamtion     ->      information icon
//    StandardButton    question        ->      question mark
//    StandardButton    warning         ->      warning mark

//    QMessageBox::about(this, "My Message", "This message is displayed in message box");
//    QMessageBox::aboutQt(this, "About");
//    QMessageBox::critical(this, "Oh!!", "Ohh Damn");
//    QMessageBox::information(this, "Oh!!", "Ohh Damn");
    QMessageBox::StandardButton reply =  QMessageBox::question(this, "Oh!!", "Want to quit?", QMessageBox::Yes | QMessageBox::No);

    if(reply == QMessageBox::Yes) {
        QApplication::quit();
    }
    else {
        qDebug() << "No is clicked";
    }
//    QMessageBox::warning(this, "Oh!!", "Ohh Damn");
}
