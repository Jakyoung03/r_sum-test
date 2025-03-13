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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbConnect;
    QPushButton *pbDisconnect;
    QPushButton *pbClear;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leHost;
    QLineEdit *lePort;
    QPlainTextEdit *pteMessage;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *ptdSend;
    QPushButton *pbSend;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pbConnect = new QPushButton(Widget);
        pbConnect->setObjectName("pbConnect");

        horizontalLayout_2->addWidget(pbConnect);

        pbDisconnect = new QPushButton(Widget);
        pbDisconnect->setObjectName("pbDisconnect");

        horizontalLayout_2->addWidget(pbDisconnect);

        pbClear = new QPushButton(Widget);
        pbClear->setObjectName("pbClear");

        horizontalLayout_2->addWidget(pbClear);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        leHost = new QLineEdit(Widget);
        leHost->setObjectName("leHost");

        horizontalLayout->addWidget(leHost);

        lePort = new QLineEdit(Widget);
        lePort->setObjectName("lePort");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lePort->sizePolicy().hasHeightForWidth());
        lePort->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lePort);


        verticalLayout->addLayout(horizontalLayout);

        pteMessage = new QPlainTextEdit(Widget);
        pteMessage->setObjectName("pteMessage");

        verticalLayout->addWidget(pteMessage);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ptdSend = new QPlainTextEdit(Widget);
        ptdSend->setObjectName("ptdSend");

        horizontalLayout_3->addWidget(ptdSend);

        pbSend = new QPushButton(Widget);
        pbSend->setObjectName("pbSend");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pbSend->sizePolicy().hasHeightForWidth());
        pbSend->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(pbSend);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbConnect->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        pbDisconnect->setText(QCoreApplication::translate("Widget", "Disconnect", nullptr));
        pbClear->setText(QCoreApplication::translate("Widget", "Clear", nullptr));
        leHost->setText(QCoreApplication::translate("Widget", "www.naver.com", nullptr));
        lePort->setText(QCoreApplication::translate("Widget", "80", nullptr));
        ptdSend->setPlainText(QCoreApplication::translate("Widget", "GET /HTTP/1.1\n"
"Host : www.naver.com", nullptr));
        pbSend->setText(QCoreApplication::translate("Widget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
