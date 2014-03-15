#ifndef SETUPREQUEST_H
#define SETUPREQUEST_H

#include <QDialog>

namespace Ui {
class setupRequest;
}

class setupRequest : public QDialog
{
    Q_OBJECT

public:
    explicit setupRequest(QWidget *parent = 0);
    ~setupRequest();

private:
    Ui::setupRequest *ui;
};

#endif // SETUPREQUEST_H
