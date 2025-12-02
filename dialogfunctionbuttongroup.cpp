/*******************************************************
* 文件名: dialogfunctionbuttongroup.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮组功能示例
*******************************************************/

#include "dialogfunctionbuttongroup.h"
#include "ui_dialogfunctionbuttongroup.h"
#include <QButtonGroup>
#include <QDebug>

DialogFunctionButtonGroup::DialogFunctionButtonGroup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFunctionButtonGroup)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Widget);

    QButtonGroup* g1 = new QButtonGroup(this);
    g1->setExclusive(false);
    g1->addButton(ui->checkBox);
    g1->addButton(ui->checkBox_2);
    g1->addButton(ui->checkBox_3);
    g1->addButton(ui->checkBox_4);
    connect(g1, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked),
            this, [this, g1](QAbstractButton* btn)
    {
        QString text = QString("%1_%2").arg(g1->id(btn)).arg(btn->text());
        auto names = ui->label_4->property("names").toStringList();
        if(btn->isChecked())
            names.append(text);
        else
            names.removeOne(text);
        ui->label_4->setText(names.join(","));
        ui->label_4->setProperty("names", names);
    });


    QButtonGroup* g2 = new QButtonGroup(this);
    g2->addButton(ui->checkBox_13, 2);
    g2->addButton(ui->checkBox_14, 3);
    g2->addButton(ui->checkBox_15, 4);
    connect(g2, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked),
            this, [this, g2](QAbstractButton* btn)
    {
        ui->label_5->setText(QString("%1_%2").arg(g2->id(btn)).arg(btn->text()));
    });


    QButtonGroup* g3 = new QButtonGroup(this);
    g3->addButton(ui->checkBox_16, 5);
    g3->addButton(ui->checkBox_17, 6);
    g3->addButton(ui->checkBox_18);   //自动分配 ID将是4
    connect(g3, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked),
            this, [this, g3](QAbstractButton* btn)
    {
        ui->label_6->setText(QString("%1_%2").arg(g3->id(btn)).arg(btn->text()));
    });


    QButtonGroup* g4 = new QButtonGroup(this);
    g4->addButton(ui->toolButton);
    g4->addButton(ui->toolButton_2, 2);
    g4->addButton(ui->toolButton_3, 1);
    g4->addButton(ui->toolButton_4);
    g4->removeButton(ui->toolButton_4);
    connect(g4, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked),
            this, [this, g4](QAbstractButton* btn)
    {
        ui->label_10->setText(QString("%1_%2").arg(g4->id(btn)).arg(btn->text()));
    });


    QButtonGroup* g5 = new QButtonGroup(this);
    g5->addButton(ui->toolButton_5);
    connect(g5, QOverload<QAbstractButton *>::of(&QButtonGroup::buttonClicked), this, [this](QAbstractButton* btn){
        ui->textEdit->append("buttonClicked isChecked():" + QString::number(btn->isChecked()));
    });
    connect(g5, QOverload<QAbstractButton *, bool>::of(&QButtonGroup::buttonToggled), this, [this](QAbstractButton* btn, bool checked){
        ui->textEdit->append("buttonToggled isChecked():" + QString::number(btn->isChecked()) + " checked:" + QString::number(checked));
    });
    connect(g5, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonPressed), this, [this](QAbstractButton* btn){
        ui->textEdit->append("buttonPressed isChecked():" + QString::number(btn->isChecked()));
    });
    connect(g5, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonReleased), this, [this](QAbstractButton* btn){
        ui->textEdit->append("buttonReleased isChecked():" + QString::number(btn->isChecked()));
    });
}

DialogFunctionButtonGroup::~DialogFunctionButtonGroup()
{
    delete ui;
}
