/*******************************************************
* 文件名: dialogqsspushbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QPushButton QSS样式示例
*******************************************************/

#include "dialogqsspushbutton.h"
#include "ui_dialogqsspushbutton.h"

DialogQSSPushButton::DialogQSSPushButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogQSSPushButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);
}

DialogQSSPushButton::~DialogQSSPushButton()
{
    delete ui;
}
