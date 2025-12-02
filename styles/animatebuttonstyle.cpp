/*******************************************************
* 文件名: animatebuttonstyle.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-11-22
* 描述: 鼠标添加进入和离开按钮动画效果示例
*******************************************************/

#include "animatebuttonstyle.h"
#include <QDebug>
#include <QStyleOptionButton>
#include <QPainter>
#include <QPushButton>

#define Normal_COLOR "#409eff"
#define Hover_COLOR "#00000000"
#define Pressed_COLOR "#3a8ee6"

AnimateButtonStyle::AnimateButtonStyle(): QProxyStyle("windows")
{

}

void AnimateButtonStyle::polish(QWidget *widget)
{
    if (qobject_cast<QPushButton *>(widget))
    {
        //设置鼠标悬停属性
        widget->setAttribute(Qt::WA_Hover, true);

        //创建动画
        animations_[widget] = new AnimationData{new QVariantAnimation, QColor()};
        const QPushButton* btn = qobject_cast<const QPushButton*>(widget);
        connect(animations_[btn]->ani, &QVariantAnimation::valueChanged, this, [this, btn](const QVariant &v){
            animations_[btn]->color = v.value<QColor>();
            ((QPushButton*)btn)->update();
        });
    }

    QProxyStyle::polish(widget);
}

void AnimateButtonStyle::drawControl(QStyle::ControlElement element, const QStyleOption *opt, QPainter *painter, const QWidget *w) const
{
    if (element == CE_PushButton)
    {
        painter->save();
        // 复制选项，准备修改颜色
        QStyleOptionButton btnOpt = *qstyleoption_cast<const QStyleOptionButton *>(opt);
        painter->setBrush(QColor(Normal_COLOR));
        painter->setPen(Qt::NoPen);


        if(btnOpt.state & State_MouseOver)
        {
            if(animations_[w]->ani->startValue() != QColor(Normal_COLOR))
            {
                QVariantAnimation* anima = animations_[w]->ani;
                anima->stop();
                anima->setParent((QObject*)w);
                anima->setStartValue(QColor(Normal_COLOR));
                anima->setEndValue(QColor(Hover_COLOR));
                anima->setDuration(800);
                anima->start();
            }

            painter->setBrush(animations_[w]->color);
        }
        else if((btnOpt.state & State_MouseOver) == 0)
        {
            if(animations_[w]->ani->startValue() != QColor(Hover_COLOR))
            {
                QVariantAnimation* anima = animations_[w]->ani;
                anima->stop();
                anima->setParent((QObject*)w);
                anima->setStartValue(QColor(Hover_COLOR));
                anima->setEndValue(QColor(Normal_COLOR));
                anima->setDuration(800);
                anima->start();
            }

            painter->setBrush(animations_[w]->color);
        }
        painter->drawRoundedRect(btnOpt.rect, 4, 4);

        painter->setPen(Qt::white);
        painter->drawText(btnOpt.rect, Qt::AlignCenter, btnOpt.text);
        painter->restore();
    }
    else
    {
        QProxyStyle::drawControl(element, opt, painter, w);
    }
}
