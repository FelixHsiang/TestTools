#ifndef REQUESTURL_H
#define REQUESTURL_H

#include <QDialog>

namespace Ui {
class requesturl;
}

class requesturl : public QDialog
{
    Q_OBJECT

public:
    explicit requesturl(QWidget *parent = 0);
    ~requesturl();

private:
    Ui::requesturl *ui;
};

#endif // REQUESTURL_H
