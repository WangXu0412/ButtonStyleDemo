/*******************************************************
* 文件名: animatebuttonstyle2.h
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮添加鼠标点击时类播放视频的动画效果
*******************************************************/
#ifndef ANIMATEBUTTONSTYLE2_H
#define ANIMATEBUTTONSTYLE2_H

#include <QProxyStyle>
#include <QTimer>
#include <QMap>

class AnimateButtonStyle2 : public QProxyStyle
{
public:
    AnimateButtonStyle2();

    void drawControl(ControlElement element, const QStyleOption *opt,
                         QPainter *painter, const QWidget *w) const override;

private:
    mutable QMap<const QWidget*, QTimer*> timers_;
};

#endif // ANIMATEBUTTONSTYLE2_H
