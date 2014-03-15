#ifndef SETUPHEADEREXTENEION_H
#define SETUPHEADEREXTENEION_H

#include <QDialog>

namespace Ui {
class setupHeaderExteneion;
}

class setupHeaderExteneion : public QDialog
{
    Q_OBJECT

public:
    explicit setupHeaderExteneion(QWidget *parent = 0);
    ~setupHeaderExteneion();

private:
    Ui::setupHeaderExteneion *ui;
};

#endif // SETUPHEADEREXTENEION_H
