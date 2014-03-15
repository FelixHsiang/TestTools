#include "setupheaderexteneion.h"
#include "ui_setupheaderexteneion.h"

setupHeaderExteneion::setupHeaderExteneion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setupHeaderExteneion)
{
    ui->setupUi(this);
}

setupHeaderExteneion::~setupHeaderExteneion()
{
    delete ui;
}
