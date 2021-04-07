#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //connect(ui->pushButtonDialog, SIGNAL(clicked()), this, SLOT (ShowDialog()));

}

MainWindow::~MainWindow()
{
    //disconnect(ui->pushButtonDialog, SIGNAL(clicked()), this, SLOT (ShowDialog()));

    delete ui;
}

void MainWindow::ShowDialog()
{
    //ui->pushButtonDialog->setText("Clicked");
    this->setWindowTitle("Clicked");
}
