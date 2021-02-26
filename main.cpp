//https://stackoverflow.com/questions/31323749/easiest-way-for-offscreen-rendering-with-qopenglwidget
#include <QApplication>

#include "ExamplePaintSurface.h"

// #include "mainwidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    ExamplePaintSurface paintSurface;
    paintSurface.resize(300, 200);
    paintSurface.render();
    paintSurface.context()->makeCurrent(&paintSurface);
    MainWidget* mw = paintSurface.mw;
    mw->render(paintSurface.getPaintDevice());

    QImage image = paintSurface.grabFramebuffer();
    image.save(QString("image.png"));

    return a.exec();
}