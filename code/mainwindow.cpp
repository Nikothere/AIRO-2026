#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->up, &QPushButton::clicked, this, [=](){
        qDebug() << "up";
        ui->plainTextEdit->setPlainText("up"); });

    connect(ui->down, &QPushButton::clicked, this, [=](){
        qDebug() << "down";
        ui->plainTextEdit->setPlainText("down"); });

    connect(ui->right, &QPushButton::clicked, this, [=](){
        qDebug() << "right";
        ui->plainTextEdit->setPlainText("right"); });

    connect(ui->left, &QPushButton::clicked, this, [=](){
        qDebug() << "left";
        ui->plainTextEdit->setPlainText("left"); });

    connect(ui->stop, &QPushButton::clicked, this, [=](){
        qDebug() << "stop";
        ui->plainTextEdit->setPlainText("stop"); });
};

MainWindow::~MainWindow()
{
    delete ui;
}
