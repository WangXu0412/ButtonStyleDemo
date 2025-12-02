/*******************************************************
* 文件名: dialogqsspushbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QPushButton QSS样式示例
*******************************************************/

#ifndef DIALOGWIDTHBUTTONS_H
#define DIALOGWIDTHBUTTONS_H

#include <QDialog>

namespace Ui {
class DialogQSSPushButton;
}

class DialogQSSPushButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogQSSPushButton(QWidget *parent = nullptr);
    ~DialogQSSPushButton();

private:
    Ui::DialogQSSPushButton *ui;
};

#endif // DIALOGWIDTHBUTTONS_H
