/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *process_label;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_play;
    QPushButton *btn_pause;
    QPushButton *btn_teardown;
    QPushButton *btn_stop;
    QPushButton *btn_config;
    QScrollArea *ResponceArea;
    QWidget *scrollAreaWidgetContents;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_close;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName(QString::fromUtf8("MainDialog"));
        MainDialog->resize(447, 346);
        gridLayout = new QGridLayout(MainDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        process_label = new QLabel(MainDialog);
        process_label->setObjectName(QString::fromUtf8("process_label"));

        horizontalLayout->addWidget(process_label);

        progressBar = new QProgressBar(MainDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_play = new QPushButton(MainDialog);
        btn_play->setObjectName(QString::fromUtf8("btn_play"));
        btn_play->setEnabled(false);

        verticalLayout->addWidget(btn_play);

        btn_pause = new QPushButton(MainDialog);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));
        btn_pause->setEnabled(false);

        verticalLayout->addWidget(btn_pause);

        btn_teardown = new QPushButton(MainDialog);
        btn_teardown->setObjectName(QString::fromUtf8("btn_teardown"));
        btn_teardown->setEnabled(false);

        verticalLayout->addWidget(btn_teardown);

        btn_stop = new QPushButton(MainDialog);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setEnabled(false);

        verticalLayout->addWidget(btn_stop);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);

        btn_config = new QPushButton(MainDialog);
        btn_config->setObjectName(QString::fromUtf8("btn_config"));

        gridLayout->addWidget(btn_config, 3, 1, 1, 1);

        ResponceArea = new QScrollArea(MainDialog);
        ResponceArea->setObjectName(QString::fromUtf8("ResponceArea"));
        ResponceArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 344, 298));
        ResponceArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(ResponceArea, 0, 0, 5, 1);

        verticalSpacer = new QSpacerItem(48, 115, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        btn_close = new QPushButton(MainDialog);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        gridLayout->addWidget(btn_close, 4, 1, 1, 1);

        ResponceArea->raise();
        btn_close->raise();
        btn_config->raise();
        QWidget::setTabOrder(btn_play, btn_pause);
        QWidget::setTabOrder(btn_pause, btn_teardown);
        QWidget::setTabOrder(btn_teardown, btn_stop);
        QWidget::setTabOrder(btn_stop, btn_close);
        QWidget::setTabOrder(btn_close, ResponceArea);

        retranslateUi(MainDialog);
        QObject::connect(btn_close, SIGNAL(clicked()), MainDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QApplication::translate("MainDialog", "MainDialog", 0, QApplication::UnicodeUTF8));
        process_label->setText(QApplication::translate("MainDialog", "Ready", 0, QApplication::UnicodeUTF8));
        btn_play->setText(QApplication::translate("MainDialog", "&Play", 0, QApplication::UnicodeUTF8));
        btn_pause->setText(QApplication::translate("MainDialog", "P&ause", 0, QApplication::UnicodeUTF8));
        btn_teardown->setText(QApplication::translate("MainDialog", "&Tear Down", 0, QApplication::UnicodeUTF8));
        btn_stop->setText(QApplication::translate("MainDialog", "&Stop", 0, QApplication::UnicodeUTF8));
        btn_config->setText(QApplication::translate("MainDialog", "C&onfigure", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("MainDialog", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
