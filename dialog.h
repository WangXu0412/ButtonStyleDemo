/*******************************************************
* 文件名: dialog.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 主窗口
*******************************************************/

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    void registeWidget(const QString& name, QDialog* dlg);

    Ui::Dialog *ui;
    QMap<int, QWidget*> widgets_;
};
#endif // DIALOG_H
