QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    commandlinkbutton.cpp \
    dialogfunctionbuttongroup.cpp \
    dialogfunctioncheckandrediobutton.cpp \
    dialogfunctioncommandlinkbutton.cpp \
    dialogfunctionpushbutton.cpp \
    dialogfunctiontoolbutton.cpp \
    dialogqsscheckbutton.cpp \
    dialogqsspushbutton.cpp \
    dialogqssradiobutton.cpp \
    dialogqsstest.cpp \
    dialogstylepushbutton.cpp \
    styles/animatebuttonstyle.cpp \
    styles/animatebuttonstyle2.cpp \
    main.cpp \
    dialog.cpp

HEADERS += \
    commandlinkbutton.h \
    dialogfunctionbuttongroup.h \
    dialogfunctioncheckandrediobutton.h \
    dialogfunctioncommandlinkbutton.h \
    dialogfunctionpushbutton.h \
    dialogfunctiontoolbutton.h \
    dialogqsscheckbutton.h \
    dialogqsspushbutton.h \
    dialogqssradiobutton.h \
    dialogqsstest.h \
    dialogstylepushbutton.h \
    styles/animatebuttonstyle.h \
    styles/animatebuttonstyle2.h \
    dialog.h

FORMS += \
    dialog.ui \
    dialogfunctionbuttongroup.ui \
    dialogfunctioncheckandrediobutton.ui \
    dialogfunctioncommandlinkbutton.ui \
    dialogfunctionpushbutton.ui \
    dialogfunctiontoolbutton.ui \
    dialogqsscheckbutton.ui \
    dialogqsspushbutton.ui \
    dialogqssradiobutton.ui \
    dialogqsstest.ui \
    dialogstylepushbutton.ui

INCLUDEPATH += styles/

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
