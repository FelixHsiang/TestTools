/********************************************************************************
** Form generated from reading UI file 'requesturl.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTURL_H
#define UI_REQUESTURL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_requesturl
{
public:

    void setupUi(QDialog *requesturl)
    {
        if (requesturl->objectName().isEmpty())
            requesturl->setObjectName(QString::fromUtf8("requesturl"));
        requesturl->resize(400, 300);

        retranslateUi(requesturl);

        QMetaObject::connectSlotsByName(requesturl);
    } // setupUi

    void retranslateUi(QDialog *requesturl)
    {
        requesturl->setWindowTitle(QApplication::translate("requesturl", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class requesturl: public Ui_requesturl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTURL_H
