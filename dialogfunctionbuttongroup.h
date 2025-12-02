/*******************************************************
* 文件名: dialogfunctionbuttongroup.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮组功能示例
*******************************************************/

#ifndef DIALOGFUNCTIONBUTTONGROUP_H
#define DIALOGFUNCTIONBUTTONGROUP_H

#include <QDialog>

namespace Ui {
class DialogFunctionButtonGroup;
}

class DialogFunctionButtonGroup : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFunctionButtonGroup(QWidget *parent = nullptr);
    ~DialogFunctionButtonGroup();

private:
    Ui::DialogFunctionButtonGroup *ui;
};

#endif // DIALOGFUNCTIONBUTTONGROUP_H
