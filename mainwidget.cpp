#include "Platform.h"
#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QKeyEvent>
#include <QMouseEvent>

#include "Platform.h"

MainWidget::MainWidget()
{
    QFont f(font());
    f.setPointSize(Platform::get()->getDefaultFontSize() * 3/2);
    setFont(f);

    setupUi(this);

    show();
}
