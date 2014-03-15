#include "requesturl.h"
#include "ui_requesturl.h"

requesturl::requesturl(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::requesturl)
{
    ui->setupUi(this);
}

requesturl::~requesturl()
{
    delete ui;
}
