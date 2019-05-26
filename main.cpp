#include "mainwidget.h"
#include <Application.h>

int main(int argc, char *argv[])
{
    Application app(argc,argv);
    app.setApplicationName("syosetu");
    if ( !app.init() ) return 1;
    MainWidget mainWidget;
    return app.exec();
}

