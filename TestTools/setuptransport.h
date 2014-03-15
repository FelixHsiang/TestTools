#ifndef SETUPTRANSPORT_H
#define SETUPTRANSPORT_H

#include <QDialog>

namespace Ui {
class setupTransport;
}

class setupTransport : public QDialog
{
    Q_OBJECT

public:
    explicit setupTransport(QWidget *parent = 0);
    ~setupTransport();

private:
    Ui::setupTransport *ui;
};

#endif // SETUPTRANSPORT_H
