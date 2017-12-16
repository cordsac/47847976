#include "doublerect.h"
#include "ui_doublerect.h"
#include "mainwindow.h"
#include "qdebug.h"

DoubleRect::DoubleRect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DoubleRect)
{
    ui->setupUi(this);
    connect(ui->sb_rect_height, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            this, &DoubleRect::setHeight);
    connect(ui->sb_rect_width, static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),
            this, &DoubleRect::setWidth);
}

DoubleRect::~DoubleRect()
{
    delete ui;
}

int DoubleRect::getWidth() const
{
    return width;
}

void DoubleRect::setWidth(int value)
{
    width = value;
}

int DoubleRect::getHeight() const
{
    return height;
}

void DoubleRect::setHeight(int value)
{
    height = value;
}

