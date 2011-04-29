#include "hammer.h"
#include "ui_hammer.h"

Hammer::Hammer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hammer)
{
    ui->setupUi(this);
}

Hammer::~Hammer()
{
    delete ui;
}
