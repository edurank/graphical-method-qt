#include "alfaiate.h"
#include "ui_alfaiate.h"

Alfaiate::Alfaiate(QWidget *parent) : QWidget(parent), ui(new Ui::Alfaiate)
{
    ui->setupUi(this);
}

Alfaiate::~Alfaiate()
{
    delete ui;
}
