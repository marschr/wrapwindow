#include "ExamplePaintSurface.h"

#include <QPainter>


ExamplePaintSurface::ExamplePaintSurface(
        QScreen*     targetScreen,
        const QSize& size)
    : OpenGlOffscreenSurface(targetScreen, size) {


    mw = new MainWidget();
    }


ExamplePaintSurface::~ExamplePaintSurface() {}


void ExamplePaintSurface::initializeGL() {}


void ExamplePaintSurface::resizeGL(int width, int height) {}


void ExamplePaintSurface::paintGL()
{
    // mw->render(getPaintDevice());
    QPainter painter(getPaintDevice());
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    painter.setPen(Qt::white);

    painter.drawText(20, 40, "Test2"); // <-- drawing here

    painter.end();
}