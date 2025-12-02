/*******************************************************
* 文件名: dialogstylepushbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮动画风格效果示例
*******************************************************/
#ifndef DIALOGWIDTHSTYLEBUTTON_H
#define DIALOGWIDTHSTYLEBUTTON_H

#include <QDialog>

namespace Ui {
class DialogStylePushButton;
}

class DialogStylePushButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStylePushButton(QWidget *parent = nullptr);
    ~DialogStylePushButton();

private:
    Ui::DialogStylePushButton *ui;
};

#endif // DIALOGWIDTHSTYLEBUTTON_H
