/*******************************************************
* 文件名: dialogqsstest.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 测试透明按钮QSS样式
*******************************************************/
#ifndef DIALOGWITHBACKGROUND_H
#define DIALOGWITHBACKGROUND_H

#include <QDialog>

namespace Ui {
class DialogQSSTest;
}

class DialogQSSTest : public QDialog
{
    Q_OBJECT

public:
    explicit DialogQSSTest(QWidget *parent = nullptr);
    ~DialogQSSTest();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::DialogQSSTest *ui;
};

#endif // DIALOGWITHBACKGROUND_H
