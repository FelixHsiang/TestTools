#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    btn_stop -> setEnabled(false);
}

void MainDialog::connectToServer()
{}

void MainDialog::play()
{}

void MainDialog::tear_down()
{}

void MainDialog::pause()
{}

void MainDialog::updateDisplay()
{}

void MainDialog::stopLinking()
{}

void MainDialog::connectionClosedByServer()
{}

void MainDialog::error()
{}

void MainDialog::closeConnection()
{}

MainDialog::~MainDialog()
{
}
