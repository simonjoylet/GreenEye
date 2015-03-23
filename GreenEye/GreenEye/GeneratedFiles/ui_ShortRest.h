/********************************************************************************
** Form generated from reading UI file 'ShortRest.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTREST_H
#define UI_SHORTREST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortRest
{
public:

    void setupUi(QWidget *ShortRest)
    {
        if (ShortRest->objectName().isEmpty())
            ShortRest->setObjectName(QStringLiteral("ShortRest"));
        ShortRest->resize(400, 300);

        retranslateUi(ShortRest);

        QMetaObject::connectSlotsByName(ShortRest);
    } // setupUi

    void retranslateUi(QWidget *ShortRest)
    {
        ShortRest->setWindowTitle(QApplication::translate("ShortRest", "ShortRest", 0));
    } // retranslateUi

};

namespace Ui {
    class ShortRest: public Ui_ShortRest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTREST_H
