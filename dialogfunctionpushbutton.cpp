/*******************************************************
* 文件名: dialogfunctionpushbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QPushButton功能示例
*******************************************************/

#include "dialogfunctionpushbutton.h"
#include "ui_dialogfunctionpushbutton.h"
#include <QMenu>

DialogFunctionPushButton::DialogFunctionPushButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFunctionPushButton)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);

    QPushButton *btn1 = new QPushButton(this);
    connect(btn1, &QPushButton::clicked, this, [this]{ui->label->setText("构造函数1 按钮被点击");});
    btn1->setGeometry(20,20,141,41);

    QPushButton *btn2 = new QPushButton("构造函数2", this);
    connect(btn2, &QPushButton::clicked, this, [this]{ui->label->setText("构造函数2 按钮被点击");});
    btn2->setGeometry(20,70,141,41);

    QPushButton *btn3 = new QPushButton(QIcon("://images/3.png"), "构造函数3", this);
    connect(btn3, &QPushButton::clicked, this, [this]{ui->label->setText("构造函数3 按钮被点击");});
    btn3->setGeometry(20,120,141,41);

    ui->pushButton->setFlat(true);

    ui->pushButton_2->setAutoDefault(false);
    ui->pushButton_5->setAutoDefault(true);

    QMenu* menu = new QMenu;
    menu->addAction("菜单1", this, [this]{ui->label->setText("菜单1 被点击");});
    menu->addAction("菜单2", this, [this]{ui->label->setText("菜单2 被点击");});
    ui->pushButton_4->setMenu(menu);
    ui->pushButton_6->setMenu(menu);
}

DialogFunctionPushButton::~DialogFunctionPushButton()
{
    delete ui;
}

void DialogFunctionPushButton::on_pushButton_clicked()
{
    ui->label->setText("setFlat按钮被点击");
}

void DialogFunctionPushButton::on_pushButton_2_clicked()
{
    ui->label->setText("setAutoDefault 0 按钮被点击");
}

void DialogFunctionPushButton::on_pushButton_5_clicked()
{
    ui->label->setText("setAutoDefault 1 按钮被点击");
}

void DialogFunctionPushButton::on_pushButton_3_clicked()
{
    ui->label->setText("setDefault 按钮被点击");
}

void DialogFunctionPushButton::on_pushButton_4_clicked()
{
    ui->label->setText("setMenue 按钮被点击");
}

void DialogFunctionPushButton::on_pushButton_7_clicked()
{
    ui->label->setText("帮你弹出菜单");
    ui->pushButton_6->showMenu();
}
