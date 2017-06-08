#include "fenster_1.h"
#include "ui_fenster_1.h"

Fenster_1::Fenster_1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fenster_1)
{
    ui->setupUi(this);
    this->setMaximumSize(400,265);
    this->setMinimumSize(400,265);
}

Fenster_1::~Fenster_1()
{
    delete ui;
}
