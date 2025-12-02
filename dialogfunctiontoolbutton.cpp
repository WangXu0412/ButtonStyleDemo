/*******************************************************
* 文件名: dialogfunctiontoolbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QToolButton功能示例
*******************************************************/

#include "dialogfunctiontoolbutton.h"
#include "ui_dialogfunctiontoolbutton.h"

#include <QToolBar>
#include <QMenu>
#include <QDebug>

DialogFuctionToolButton::DialogFuctionToolButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFuctionToolButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);

    ui->toolButton_6->setIcon(QIcon(":/images/5.png"));
    ui->toolButton_7->setIcon(QIcon(":/images/5.png"));
    ui->toolButton_7->setAutoRaise(true);

    //不设置QAction
    qDebug() << "toolbutton_8 action:" << ui->toolButton_8->defaultAction();
    connect(ui->toolButton_8, &QToolButton::clicked, this, [](bool){
        qDebug() << "toolbutton_8 clicked";
    });
    connect(ui->toolButton_8, &QToolButton::triggered, this, [](QAction* action){
        qDebug() << "toolbutton_8 triggered action:" << action;}
    );

    //设置QAction
    QAction* action = new QAction("MyAction");
    ui->toolButton_9->setDefaultAction(action);
    qDebug() << "toolbutton_9 action:" << ui->toolButton_9->defaultAction();
    connect(ui->toolButton_9, &QToolButton::clicked, this, [](bool){
        qDebug() << "toolbutton_9 clicked";
    });
    connect(ui->toolButton_9, &QToolButton::triggered, this, [](QAction* action){
        qDebug() << "toolbutton_9 triggered action:" << action;}
    );

    QMenu* menu = new QMenu;
    menu->addAction("菜单1", this, []{qDebug() << "菜单1 被点击";});
    menu->addAction("菜单2", this, []{qDebug() << "菜单2 被点击";});
    ui->toolButton_10->setMenu(menu);
    ui->toolButton_10->setPopupMode(QToolButton::DelayedPopup);
    ui->toolButton_11->setMenu(menu);
    ui->toolButton_11->setPopupMode(QToolButton::MenuButtonPopup);
    ui->toolButton_12->setMenu(menu);
    ui->toolButton_12->setPopupMode(QToolButton::InstantPopup);
}

DialogFuctionToolButton::~DialogFuctionToolButton()
{
    delete ui;
}
