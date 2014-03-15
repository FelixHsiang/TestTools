/********************************************************************************
** Form generated from reading UI file 'setupheaderexteneion.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPHEADEREXTENEION_H
#define UI_SETUPHEADEREXTENEION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_setupHeaderExteneion
{
public:

    void setupUi(QDialog *setupHeaderExteneion)
    {
        if (setupHeaderExteneion->objectName().isEmpty())
            setupHeaderExteneion->setObjectName(QString::fromUtf8("setupHeaderExteneion"));
        setupHeaderExteneion->resize(400, 300);

        retranslateUi(setupHeaderExteneion);

        QMetaObject::connectSlotsByName(setupHeaderExteneion);
    } // setupUi

    void retranslateUi(QDialog *setupHeaderExteneion)
    {
        setupHeaderExteneion->setWindowTitle(QApplication::translate("setupHeaderExteneion", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setupHeaderExteneion: public Ui_setupHeaderExteneion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPHEADEREXTENEION_H
