/*******************************************************
* 文件名: animatebuttonstyle.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 鼠标添加进入和离开按钮动画效果示例
*******************************************************/
#ifndef ANIMATESTYLE_H
#define ANIMATESTYLE_H

#include <QProxyStyle>
#include <QPalette>
#include <QVariantAnimation>

class AnimateButtonStyle : public QProxyStyle
{
public:
    AnimateButtonStyle();

    void polish(QWidget *widget) override;
    void drawControl(ControlElement element, const QStyleOption *opt,
                         QPainter *painter, const QWidget *w) const override;

private:
    struct AnimationData{
        QVariantAnimation* ani;
        QColor color;
    };
    mutable QMap<const QWidget*, AnimationData*> animations_;
};

#endif // ANIMATESTYLE_H
