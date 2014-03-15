#include "setuptransport.h"
#include "ui_setuptransport.h"

setupTransport::setupTransport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setupTransport)
{
    ui->setupUi(this);
}

setupTransport::~setupTransport()
{
    delete ui;
}
