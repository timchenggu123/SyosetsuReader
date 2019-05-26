#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "WidgetCommon.h"
#include "ui_mainwidget.h"

namespace UI
{
    class MainWidget: public Ui_MainWidget {};
}

class MainWidget: public WidgetCommon, private Ui::MainWidget
{
    Q_OBJECT

public:
    MainWidget();

};

#endif // MAINWIDGET_H
