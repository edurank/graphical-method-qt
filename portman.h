#ifndef PORTMAN_H
#define PORTMAN_H

#include <QWidget>

namespace Ui {
class Portman;
}

class Portman : public QWidget
{
    Q_OBJECT

public:
    explicit Portman(QWidget *parent = 0);
    ~Portman();

private:
    Ui::Portman *ui;
};

#endif // PORTMAN_H
