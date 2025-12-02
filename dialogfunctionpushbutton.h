/*******************************************************
* 文件名: dialogfunctionpushbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: QPushButton功能示例
*******************************************************/

#ifndef DIALOGPUSHBUTTONFUNCTION_H
#define DIALOGPUSHBUTTONFUNCTION_H

#include <QDialog>

namespace Ui {
class DialogFunctionPushButton;
}

class DialogFunctionPushButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFunctionPushButton(QWidget *parent = nullptr);
    ~DialogFunctionPushButton();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::DialogFunctionPushButton *ui;
};

#endif // DIALOGPUSHBUTTONFUNCTION_H
