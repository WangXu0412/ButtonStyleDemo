/*******************************************************
* 文件名: dialogfunctioncheckandrediobutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QCheckButton和QRadioButton功能示例
*******************************************************/
#ifndef DIALOGWIDTHCHECKANDREDIOBUTTON_H
#define DIALOGWIDTHCHECKANDREDIOBUTTON_H

#include <QDialog>

namespace Ui {
class DialogFunctionCheckAndRedioButton;
}

class DialogFunctionCheckAndRedioButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFunctionCheckAndRedioButton(QWidget *parent = nullptr);
    ~DialogFunctionCheckAndRedioButton();

private slots:
    void on_checkBox_5_stateChanged(int arg1);
    void on_checkBox_4_stateChanged(int arg1);
    void on_checkBox_6_stateChanged(int arg1);

private:
    Ui::DialogFunctionCheckAndRedioButton *ui;
};

#endif // DIALOGWIDTHCHECKANDREDIOBUTTON_H
