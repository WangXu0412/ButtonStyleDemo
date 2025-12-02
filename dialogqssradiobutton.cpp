/*******************************************************
* 文件名: dialogqssradiobutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QRadioButton QSS样式使用示例
*******************************************************/

#include "dialogqssradiobutton.h"
#include "ui_dialogqssradiobutton.h"

DialogQSSRadioButton::DialogQSSRadioButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogQSSRadioButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);
}

DialogQSSRadioButton::~DialogQSSRadioButton()
{
    delete ui;
}
