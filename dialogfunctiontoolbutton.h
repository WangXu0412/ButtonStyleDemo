/*******************************************************
* 文件名: dialogfunctiontoolbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QToolButton功能示例
*******************************************************/
#ifndef DIALOGWITHTOOLBUTTON_H
#define DIALOGWITHTOOLBUTTON_H

#include <QDialog>

namespace Ui {
class DialogFuctionToolButton;
}

class DialogFuctionToolButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFuctionToolButton(QWidget *parent = nullptr);
    ~DialogFuctionToolButton();

private:
    Ui::DialogFuctionToolButton *ui;
};

#endif // DIALOGWITHTOOLBUTTON_H
