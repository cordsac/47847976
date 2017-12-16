#ifndef DOUBLERECT_H
#define DOUBLERECT_H

#include <QWidget>
#include <QSpinBox>

namespace Ui {
class DoubleRect;
}

class DoubleRect : public QWidget
{
    Q_OBJECT

public:
    explicit DoubleRect(QWidget *parent = 0);
    ~DoubleRect();

    int getWidth() const;
    void setWidth(int value);

    int getHeight() const;
    void setHeight(int value);

public slots:

private slots:

private:
    Ui::DoubleRect *ui;
    int width;
    int height;
};

#endif // DOUBLERECT_H
