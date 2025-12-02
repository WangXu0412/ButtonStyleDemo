/*******************************************************
* 文件名: dialogqssradiobutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QRadioButton QSS样式使用示例
*******************************************************/

#ifndef DIALOGSTYLERADIOBUTTON_H
#define DIALOGSTYLERADIOBUTTON_H

#include <QDialog>

namespace Ui {
class DialogQSSRadioButton;
}

class DialogQSSRadioButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogQSSRadioButton(QWidget *parent = nullptr);
    ~DialogQSSRadioButton();

private:
    Ui::DialogQSSRadioButton *ui;
};

#endif // DIALOGSTYLERADIOBUTTON_H
