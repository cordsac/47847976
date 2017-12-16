#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QGraphicsTextItem"
#include "QGraphicsRectItem"
#include "QGraphicsItem"
#include <QColor>
#include <qdebug.h>
#include <QColorDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    ui->widgethide->setVisible(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addRect()
{

    DoubleRect *obj = new DoubleRect();
    int height = obj->getHeight();
    int width = obj->getWidth();
    qDebug()<< height <<"This main height";
    qDebug()<< width <<"This main width";

}

void MainWindow::on_btnRect_clicked()
{
    addRect();
}

