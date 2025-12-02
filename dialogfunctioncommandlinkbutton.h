#ifndef DIALOGFUNCTIONCOMMANDLINKBUTTON_H
#define DIALOGFUNCTIONCOMMANDLINKBUTTON_H

#include <QDialog>

namespace Ui {
class DialogFunctionCommandLinkButton;
}

class DialogFunctionCommandLinkButton : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFunctionCommandLinkButton(QWidget *parent = nullptr);
    ~DialogFunctionCommandLinkButton();

private:
    Ui::DialogFunctionCommandLinkButton *ui;
};

#endif // DIALOGFUNCTIONCOMMANDLINKBUTTON_H
