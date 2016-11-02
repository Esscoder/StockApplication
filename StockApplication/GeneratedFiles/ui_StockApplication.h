/********************************************************************************
** Form generated from reading UI file 'StockApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKAPPLICATION_H
#define UI_STOCKAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StockApplicationClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StockApplicationClass)
    {
        if (StockApplicationClass->objectName().isEmpty())
            StockApplicationClass->setObjectName(QStringLiteral("StockApplicationClass"));
        StockApplicationClass->resize(600, 400);
        menuBar = new QMenuBar(StockApplicationClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        StockApplicationClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StockApplicationClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        StockApplicationClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(StockApplicationClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        StockApplicationClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(StockApplicationClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StockApplicationClass->setStatusBar(statusBar);

        retranslateUi(StockApplicationClass);

        QMetaObject::connectSlotsByName(StockApplicationClass);
    } // setupUi

    void retranslateUi(QMainWindow *StockApplicationClass)
    {
        StockApplicationClass->setWindowTitle(QApplication::translate("StockApplicationClass", "StockApplication", 0));
    } // retranslateUi

};

namespace Ui {
    class StockApplicationClass: public Ui_StockApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKAPPLICATION_H
