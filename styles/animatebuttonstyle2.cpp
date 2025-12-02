/*******************************************************
* 文件名: animatebuttonstyle2.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 按钮添加鼠标点击时类播放视频的动画效果
*******************************************************/
#include "animatebuttonstyle2.h"
#include <QStyleOptionButton>
#include <QPainter>
#include <QDebug>

AnimateButtonStyle2::AnimateButtonStyle2():QProxyStyle("windows")
{

}

void AnimateButtonStyle2::drawControl(QStyle::ControlElement element, const QStyleOption *opt, QPainter *painter, const QWidget *w) const
{
    if (element == CE_PushButton)
    {
        QStyleOptionButton btnOpt = *qstyleoption_cast<const QStyleOptionButton *>(opt);
        if(btnOpt.state & State_On || btnOpt.state & State_Sunken)
        {
            if(timers_[w] == nullptr)
            {
                timers_[w] = new QTimer;
                timers_[w]->setTimerType(Qt::PreciseTimer);
                timers_[w]->setInterval(1000/24);
                timers_[w]->setProperty("index", 0);
                connect(timers_[w], &QTimer::timeout, this, [this, w]{
                    int index = (timers_[w]->property("index").toInt() + 1) % 120;
                    timers_[w]->setProperty("index", index);
                    ((QWidget*)w)->update();
                });
            }

            if(!timers_[w]->isActive())
                timers_[w]->start();

            //根据当前索引切图
            painter->drawPixmap(
                0, 0,
                QPixmap(QString("://images/video_picture/zhenji_%1.png")
                    .arg(timers_[w]->property("index").toInt() + 1, 4, 10, QChar('0')))
            );

            return;
        }
        else if(timers_[w] && timers_[w]->isActive())
        {
            timers_[w]->stop();
        }
    }
    QProxyStyle::drawControl(element, opt, painter, w);
}
