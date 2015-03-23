/********************************************************************************
** Form generated from reading UI file 'GreenEye.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREENEYE_H
#define UI_GREENEYE_H

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

class Ui_GreenEye
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GreenEye)
    {
        if (GreenEye->objectName().isEmpty())
            GreenEye->setObjectName(QStringLiteral("GreenEye"));
        GreenEye->resize(400, 300);
        menuBar = new QMenuBar(GreenEye);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        GreenEye->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GreenEye);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GreenEye->addToolBar(mainToolBar);
        centralWidget = new QWidget(GreenEye);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GreenEye->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GreenEye);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GreenEye->setStatusBar(statusBar);

        retranslateUi(GreenEye);

        QMetaObject::connectSlotsByName(GreenEye);
    } // setupUi

    void retranslateUi(QMainWindow *GreenEye)
    {
        GreenEye->setWindowTitle(QApplication::translate("GreenEye", "GreenEye", 0));
    } // retranslateUi

};

namespace Ui {
    class GreenEye: public Ui_GreenEye {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREENEYE_H
