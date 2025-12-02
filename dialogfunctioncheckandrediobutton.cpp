/*******************************************************
* 文件名: dialogfunctioncheckandrediobutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QCheckButton和QRadioButton功能示例
*******************************************************/

#include "dialogfunctioncheckandrediobutton.h"
#include "ui_dialogfunctioncheckandrediobutton.h"

DialogFunctionCheckAndRedioButton::DialogFunctionCheckAndRedioButton(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFunctionCheckAndRedioButton)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);

    ui->checkBox_4->setTristate(true);
    ui->checkBox_4->setCheckState(Qt::PartiallyChecked);
}

DialogFunctionCheckAndRedioButton::~DialogFunctionCheckAndRedioButton()
{
    delete ui;
}

void DialogFunctionCheckAndRedioButton::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->checkBox_5->setText("已关注");
        ui->checkBox_5->setIcon(QIcon(":/images/guanzhu.png"));
    }
    else if(arg1 == Qt::PartiallyChecked)
    {
        ui->checkBox_5->setText("犹豫中");
        ui->checkBox_5->setIcon(QIcon(":/images/idea.png"));
    }
    else if(arg1 == Qt::Unchecked)
    {
        ui->checkBox_5->setText("未关注");
        ui->checkBox_5->setIcon(QIcon(":/images/weiguanzhu.png"));
    }
}

void DialogFunctionCheckAndRedioButton::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->checkBox_4->setText("已关注");
        ui->checkBox_4->setIcon(QIcon(":/images/guanzhu.png"));
    }
    else if(arg1 == Qt::PartiallyChecked)
    {
        ui->checkBox_4->setText("犹豫中");
        ui->checkBox_4->setIcon(QIcon(":/images/idea.png"));
    }
    else if(arg1 == Qt::Unchecked)
    {
        ui->checkBox_4->setText("未关注");
        ui->checkBox_4->setIcon(QIcon(":/images/weiguanzhu.png"));
    }
}

void DialogFunctionCheckAndRedioButton::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->checkBox_6->setText("已关注");
        ui->checkBox_6->setIcon(QIcon(":/images/guanzhu.png"));
    }
    else if(arg1 == Qt::PartiallyChecked)
    {
        ui->checkBox_6->setText("犹豫中");
        ui->checkBox_6->setIcon(QIcon(":/images/idea.png"));
    }
    else if(arg1 == Qt::Unchecked)
    {
        ui->checkBox_6->setText("未关注");
        ui->checkBox_6->setIcon(QIcon(":/images/weiguanzhu.png"));
    }
}
