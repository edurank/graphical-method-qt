#ifndef PORTMANJOHANSSON_H
#define PORTMANJOHANSSON_H

#include <QWidget>

namespace Ui {
class PortmanJohansson;
}

class PortmanJohansson : public QWidget
{
    Q_OBJECT

public:
    explicit PortmanJohansson(QWidget *parent = 0);
    ~PortmanJohansson();

private:
    Ui::PortmanJohansson *ui;
};

#endif // PORTMANJOHANSSON_H
