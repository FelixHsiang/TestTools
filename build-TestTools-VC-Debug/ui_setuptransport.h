/********************************************************************************
** Form generated from reading UI file 'setuptransport.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPTRANSPORT_H
#define UI_SETUPTRANSPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_setupTransport
{
public:

    void setupUi(QDialog *setupTransport)
    {
        if (setupTransport->objectName().isEmpty())
            setupTransport->setObjectName(QString::fromUtf8("setupTransport"));
        setupTransport->resize(400, 300);

        retranslateUi(setupTransport);

        QMetaObject::connectSlotsByName(setupTransport);
    } // setupUi

    void retranslateUi(QDialog *setupTransport)
    {
        setupTransport->setWindowTitle(QApplication::translate("setupTransport", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setupTransport: public Ui_setupTransport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPTRANSPORT_H
