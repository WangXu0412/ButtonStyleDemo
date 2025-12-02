/*******************************************************
* 文件名: commandlinkbutton.cpp
* 作者: 破土而生的豆芽 <wxh:douyaa_1030>
* 日期: 2025-12-02
* 描述: 自定义QCommandLinkButton样式
*******************************************************/
#include "commandlinkbutton.h"
#include <QStylePainter>
#include <QStyleOptionButton>
#include <QFont>

CommandLinkButton::CommandLinkButton(QWidget *parent)
    : QCommandLinkButton(parent)
{

}

void CommandLinkButton::paintEvent(QPaintEvent *)
{
    QStylePainter p(this);
    p.save();

    QStyleOptionButton option;
    initStyleOption(&option);

    //Enable command link appearance on Vista
    option.features |= QStyleOptionButton::CommandLinkButton;
    option.text = QString();
    option.icon = QIcon(); //we draw this ourselves
    QSize pixmapSize = icon().actualSize(iconSize());

    int vOffset = isDown() ? style()->pixelMetric(QStyle::PM_ButtonShiftVertical) : 0;
    int hOffset = isDown() ? style()->pixelMetric(QStyle::PM_ButtonShiftHorizontal) : 0;

    int topMargin = 10;
    int leftMargin = 7;
    int rightMargin = 4;
    //int bottomMargin = 10;

    //Draw icon
    p.drawControl(QStyle::CE_PushButton, option);
    if (!icon().isNull())
        p.drawPixmap(leftMargin + hOffset, topMargin + vOffset,
        icon().pixmap(pixmapSize, isEnabled() ? QIcon::Normal : QIcon::Disabled,
                                  isChecked() ? QIcon::On : QIcon::Off));

    //Draw title
    QColor textColor = palette().buttonText().color();
    if (isEnabled()) {
        textColor = QColor(21, 28, 85);
        if (underMouse() && !isDown())
            textColor = QColor(7, 64, 229);
        option.palette.setColor(QPalette::ButtonText, textColor);
    }

    int textflags = Qt::TextShowMnemonic;
    if (!style()->styleHint(QStyle::SH_UnderlineShortcut, &option, this))
        textflags |= Qt::TextHideMnemonic;

    QFont font = p.font();
    font.setFamily("微软雅黑");
    font.setPointSizeF(12.0);
    font.setBold(true);
    p.setFont(font);
    QRect titleRect = option.rect;
    titleRect = titleRect.adjusted(33, topMargin, -rightMargin, 0);
    p.drawItemText(titleRect.translated(hOffset, vOffset),
                    textflags, option.palette, isEnabled(), text(), QPalette::ButtonText);

    //Draw description
    QFontMetrics fm(font);
    int nTitleHeight = fm.height();
    QRect descRect = option.rect;
    descRect = descRect.adjusted(33, topMargin + nTitleHeight + 3, -rightMargin, 0);

    textflags |= Qt::TextWordWrap | Qt::ElideRight;
    font.setBold(false);
    font.setPointSizeF(9.0);
    p.setFont(font);

    //修改描述的颜色
    option.palette.setColor(QPalette::ButtonText, QColor("#4a5568"));
    p.drawItemText(descRect.translated(hOffset, vOffset), textflags,
                    option.palette, isEnabled(), description(), QPalette::ButtonText);
    p.restore();
}
