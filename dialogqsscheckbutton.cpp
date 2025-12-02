/*******************************************************
* 文件名: dialogqsscheckbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QCheckButton QSS样式示例
*******************************************************/

#include "dialogqsscheckbutton.h"
#include "ui_dialogqsscheckbutton.h"

DialogQSSCheckButton::DialogQSSCheckButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogQSSCheckButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);

    ui->checkBox_3->setCheckState(Qt::PartiallyChecked);
    ui->checkBox_8->setCheckState(Qt::PartiallyChecked);
    ui->checkBox_20->setCheckState(Qt::PartiallyChecked);
    ui->checkBox_13->setCheckState(Qt::PartiallyChecked);
}

DialogQSSCheckButton::~DialogQSSCheckButton()
{
    delete ui;
}
