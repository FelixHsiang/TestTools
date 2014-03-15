#include "setuprequest.h"
#include "ui_setuprequest.h"

setupRequest::setupRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setupRequest)
{
    ui->setupUi(this);
}

setupRequest::~setupRequest()
{
    delete ui;
}
