/*******************************************************
* 文件名: dialogqsscheckbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QCheckButton QSS样式示例
*******************************************************/
#ifndef DIALOGWIDTHCHECKBUTTON_H
#define DIALOGWIDTHCHECKBUTTON_H

#include <QDialog>

namespace Ui {
class DialogQSSCheckButton;
}

class DialogQSSCheckButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogQSSCheckButton(QWidget *parent = nullptr);
    ~DialogQSSCheckButton();

private:
    Ui::DialogQSSCheckButton *ui;
};

#endif // DIALOGWIDTHCHECKBUTTON_H
