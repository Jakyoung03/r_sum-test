/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pbReset;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbCoffee;
    QPushButton *pbMilk;
    QPushButton *pbtea;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(310, 60, 151, 121));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(560, 420, 91, 41));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 210, 501, 66));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 5, 0, 5);
        pb10 = new QPushButton(widget);
        pb10->setObjectName("pb10");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb10->sizePolicy().hasHeightForWidth());
        pb10->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pb10);

        pb50 = new QPushButton(widget);
        pb50->setObjectName("pb50");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb50->sizePolicy().hasHeightForWidth());
        pb50->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pb50);

        pb100 = new QPushButton(widget);
        pb100->setObjectName("pb100");
        sizePolicy1.setHeightForWidth(pb100->sizePolicy().hasHeightForWidth());
        pb100->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pb100);

        pb500 = new QPushButton(widget);
        pb500->setObjectName("pb500");
        sizePolicy1.setHeightForWidth(pb500->sizePolicy().hasHeightForWidth());
        pb500->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pb500);

        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(190, 300, 431, 71));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 5, 0, 5);
        pbCoffee = new QPushButton(widget1);
        pbCoffee->setObjectName("pbCoffee");
        sizePolicy1.setHeightForWidth(pbCoffee->sizePolicy().hasHeightForWidth());
        pbCoffee->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbCoffee);

        pbMilk = new QPushButton(widget1);
        pbMilk->setObjectName("pbMilk");
        sizePolicy1.setHeightForWidth(pbMilk->sizePolicy().hasHeightForWidth());
        pbMilk->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbMilk);

        pbtea = new QPushButton(widget1);
        pbtea->setObjectName("pbtea");
        sizePolicy1.setHeightForWidth(pbtea->sizePolicy().hasHeightForWidth());
        pbtea->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pbtea);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        pb10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pb50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pb100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pb500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "Milk(150)", nullptr));
        pbtea->setText(QCoreApplication::translate("Widget", "Tea(200)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
