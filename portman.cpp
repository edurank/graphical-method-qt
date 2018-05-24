#include "portman.h"
#include "ui_portman.h"

Portman::Portman(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Portman)
{
    ui->setupUi(this);
}

Portman::~Portman()
{
    delete ui;
}
