#include "hammer.h"
#include "ui_hammer.h"

#include <feedmanager.h>

FeedManager fManager = new FeedManager();

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
