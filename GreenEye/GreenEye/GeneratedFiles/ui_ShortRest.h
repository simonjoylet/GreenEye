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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShortRest
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QWidget *ShortRest)
    {
        if (ShortRest->objectName().isEmpty())
            ShortRest->setObjectName(QStringLiteral("ShortRest"));
        ShortRest->resize(400, 300);
        horizontalLayout = new QHBoxLayout(ShortRest);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(ShortRest);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        retranslateUi(ShortRest);

        QMetaObject::connectSlotsByName(ShortRest);
    } // setupUi

    void retranslateUi(QWidget *ShortRest)
    {
        ShortRest->setWindowTitle(QApplication::translate("ShortRest", "ShortRest", 0));
        label->setText(QApplication::translate("ShortRest", "This is short rest for you", 0));
    } // retranslateUi

};

namespace Ui {
    class ShortRest: public Ui_ShortRest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTREST_H
