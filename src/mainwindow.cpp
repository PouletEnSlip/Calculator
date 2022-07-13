#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pBCalculatePlus_clicked() {
    float nb1 = 0.00;
    float nb2 = 0.00;
    float sum;
    nb1 = ui->lENb1->text().toFloat();
    nb2 = ui->lENb2->text().toFloat();
    sum = nb1 + nb2;
    ui->lSum->setText(QString::number(sum));
}

void MainWindow::on_pBCalculateFois_clicked() {
    float nb1 = 0.00;
    float nb2 = 0.00;
    float sum;
    nb1 = ui->lENb1->text().toFloat();
    nb2 = ui->lENb2->text().toFloat();
    sum = nb1 * nb2;
    ui->lSum->setText(QString::number(sum));
}

void MainWindow::on_pBCalculateDiviser_clicked() {
    float nb1 = 0.00;
    float nb2 = 0.00;
    float sum;
    nb1 = ui->lENb1->text().toFloat();
    nb2 = ui->lENb2->text().toFloat();
    sum = nb1 / nb2;
    ui->lSum->setText(QString::number(sum));
}


void MainWindow::on_pBCalculateMoins_clicked() {
    float nb1 = 0.00;
    float nb2 = 0.00;
    float sum;
    nb1 = ui->lENb1->text().toFloat();
    nb2 = ui->lENb2->text().toFloat();
    sum = nb1 - nb2;
    ui->lSum->setText(QString::number(sum));
}

void MainWindow::on_pBClear_clicked() {
    ui->lSum->clear();
    ui->lENb1->clear();
    ui->lENb2->clear();
}

void MainWindow::on_pBExit_clicked() {
    exit(0);
}
