/*******************************************************
* 文件名: dialogfunctioncommandlinkbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-12-02
* 描述: QCommandLinkButton 功能示例程序
*******************************************************/
#include "dialogfunctioncommandlinkbutton.h"
#include "ui_dialogfunctioncommandlinkbutton.h"

DialogFunctionCommandLinkButton::DialogFunctionCommandLinkButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFunctionCommandLinkButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);
}

DialogFunctionCommandLinkButton::~DialogFunctionCommandLinkButton()
{
    delete ui;
}
