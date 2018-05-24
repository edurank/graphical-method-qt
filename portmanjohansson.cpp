#include "portmanjohansson.h"
#include "ui_portmanjohansson.h"

PortmanJohansson::PortmanJohansson(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PortmanJohansson)
{
    ui->setupUi(this);
}

PortmanJohansson::~PortmanJohansson()
{
    delete ui;
}
