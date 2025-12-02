/*******************************************************
* 文件名: dialog.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 界面主窗口
*******************************************************/

#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

#include "animatebuttonstyle.h"
#include "dialogqsstest.h"
#include "dialogqsspushbutton.h"
#include "dialogstylepushbutton.h"
#include "dialogfunctionpushbutton.h"
#include "dialogfunctiontoolbutton.h"
#include "dialogqsscheckbutton.h"
#include "dialogfunctioncheckandrediobutton.h"
#include "dialogqssradiobutton.h"
#include "dialogfunctionbuttongroup.h"
#include "dialogfunctioncommandlinkbutton.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window);

    registeWidget("透明按钮示例", new DialogQSSTest);
    registeWidget("按钮QSS效果示例", new DialogQSSPushButton);
    registeWidget("按钮动画效果示例", new DialogStylePushButton);
    registeWidget("按钮功能示例", new DialogFunctionPushButton);
    registeWidget("工具按钮功能示例", new DialogFuctionToolButton);
    registeWidget("复选框QSS样式示例", new DialogQSSCheckButton);
    registeWidget("复选框单选框使用示例", new DialogFunctionCheckAndRedioButton);
    registeWidget("单选框QSS样式示例", new DialogQSSRadioButton);
    registeWidget("按钮组使用示例",new DialogFunctionButtonGroup);
    registeWidget("命令链接按钮", new DialogFunctionCommandLinkButton);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->stackedWidget->setCurrentIndex(ui->listWidget->row(item));
}

void Dialog::registeWidget(const QString& name, QDialog* dlg)
{
    int index = widgets_.size();
    QWidget* w = new QWidget;
    dlg->setParent(w);
    dlg->move(0,0);
    dlg->show();
    ui->listWidget->addItem(name);
    ui->stackedWidget->addWidget(w);
    widgets_.insert(index, w);
}

