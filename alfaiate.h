#ifndef ALFAIATE_H
#define ALFAIATE_H

#include <QWidget>

namespace Ui {
    class Alfaiate;
}

class Alfaiate : public QWidget
{
    Q_OBJECT

public:
    explicit Alfaiate(QWidget *parent = 0);
    ~Alfaiate();

private:
    Ui::Alfaiate *ui;
};

#endif // ALFAIATE_H
