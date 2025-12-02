/*******************************************************
* 文件名: dialogstylepushbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮动画风格效果示例
*******************************************************/
#include "dialogstylepushbutton.h"
#include "ui_dialogstylepushbutton.h"
#include "animatebuttonstyle.h"
#include "animatebuttonstyle2.h"

DialogStylePushButton::DialogStylePushButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStylePushButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);

    AnimateButtonStyle* style1 = new AnimateButtonStyle;
    ui->pushButton->setStyle(style1);

    AnimateButtonStyle2* style2 = new AnimateButtonStyle2;
    ui->pushButton_5->setStyle(style2);
}

DialogStylePushButton::~DialogStylePushButton()
{
    delete ui;
}
