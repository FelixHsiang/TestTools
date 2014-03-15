#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include "ui_maindialog.h"

namespace Ui {
class MainDialog;
}

class MainDialog : public QDialog, public Ui::MainDialog
{
    Q_OBJECT

public:
    explicit MainDialog(QWidget *parent = 0);
    ~MainDialog();
private slots:
    void connectToServer();
    void play();
    void tear_down();
    void pause();
    void updateDisplay();
    void stopLinking();
    void connectionClosedByServer();
    void error();
private:
    void closeConnection();
};

#endif // MAINDIALOG_H
