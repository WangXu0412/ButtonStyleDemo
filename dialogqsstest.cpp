/*******************************************************
* 文件名: dialogqsstest.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 测试透明按钮QSS样式
*******************************************************/

#include "dialogqsstest.h"
#include "ui_dialogqsstest.h"
#include <QMessageBox>
#include <QDebug>

DialogQSSTest::DialogQSSTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogQSSTest)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
}

DialogQSSTest::~DialogQSSTest()
{
    delete ui;
}

void DialogQSSTest::on_pushButton_clicked()
{
    QMessageBox::information(this, "提示", "你轻轻点了一下大黄的鼻子", "知道了");
}

void DialogQSSTest::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "提示", "你又点了一下大黄的耳朵", "知道了");
}
