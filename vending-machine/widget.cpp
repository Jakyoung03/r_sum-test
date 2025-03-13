#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

//int money{0}; -> 헤더파일에 선언되어 있으므로 cpp에 선언되어도 멤버변수로 고정됨

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    updateButtons();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::increaseMoney(int value){
    money += value;
    ui -> lcdNumber ->display(money);
    updateButtons();
}

void Widget::updateButtons()
{
    ui -> pbCoffee->setEnabled(money >= 100);
    ui -> pbMilk->setEnabled(money >= 150);
    ui -> pbtea->setEnabled(money >= 200);
    ui->pbReset->setEnabled(money > 0);

}

void Widget::purchaseItem(int cost)
{
    if (money >= cost) {
        increaseMoney(-cost);
    }
    else {
        QMessageBox::warning(this, "Insufficient balance", "Your balance is insufficient!");
    }
}

void Widget::on_pb10_clicked()
{
    increaseMoney(10);
}

void Widget::on_pb50_clicked()
{
    increaseMoney(50);
}


void Widget::on_pb100_clicked()
{
    increaseMoney(100);
}

void Widget::on_pb500_clicked()
{
    increaseMoney(500);
}


void Widget::on_pbCoffee_clicked()
{
    purchaseItem(100);
}

void Widget::on_pbMilk_clicked()
{
    purchaseItem(150);
}


void Widget::on_pbtea_clicked()
{
    purchaseItem(200);
}

void Widget::on_pbReset_clicked()
{
    if (money > 0) {
        int coins[] = {500, 100, 50, 10};
        int count[4] = {0};

        int remaining = money;
        for (int i = 0; i < 4; i++) {
            count[i] = remaining/ coins[i];
            remaining %= coins[i];
        }

        QString message = QString("500won: %1\n100won: %2\n50won: %3\n 10won: %4").arg(count[0]).arg(count[1]).arg(count[2]).arg(count[3]);

        QMessageBox::information(this, "Change", message);

        money = 0;
        ui ->lcdNumber ->display(money);
        updateButtons();
    }
    else {
        QMessageBox::information(this, "Change", "0won");
    }
}

