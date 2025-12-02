/*******************************************************
* 文件名: commandlinkbutton.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-12-02
* 描述: 自定义QCommandLinkButton样式
*******************************************************/
#ifndef COMMANDLINKBUTTON_H
#define COMMANDLINKBUTTON_H

#include <QCommandLinkButton>

class CommandLinkButton : public QCommandLinkButton
{
    Q_OBJECT
public:
    explicit CommandLinkButton(QWidget *parent = nullptr);

protected:
    virtual void paintEvent(QPaintEvent *) override;


signals:

};

#endif // COMMANDLINKBUTTON_H
