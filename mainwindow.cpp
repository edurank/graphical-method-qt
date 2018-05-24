#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "portmanjohansson.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Scarlet-Johansson");
    ui->comboBox->addItem("Alfaiate");

    connect(botao, SIGNAL(released()), this, SLOT(botaoHandler()) );
}

void MainWindow::botaoHandler()
{
    PortmanJohansson pj;
    pj.show();
}

// Destructor
MainWindow::~MainWindow()
{
    delete ui;
}

