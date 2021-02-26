#include "wrapperwindow.h"

#include <QOpenGLFunctions>


OpenGLWidget::OpenGLWidget(){
  qDebug() << "OpenGLWidget Ctor";
}


OpenGLWidget::~OpenGLWidget(){
  qDebug() << "OpenGLWidget Dtor";
}

void OpenGLWidget::initializeGL() {
  qDebug() << "OGW initializeGL()";
  QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
  f->glClearColor(1.0f, 1.0f, 0.5f, 1.0f);
}
void OpenGLWidget::resizeGL(int width, int height) {
  qDebug() << "OGW resizeGL()";
}
void OpenGLWidget::paintGL() {
  qDebug() << "OGW paintGL()";
}


WrapperWindow::WrapperWindow(QWindow *parent) : QWindow(parent){
  qDebug() << "WrapperWindow Ctor";

  // setSurfaceType(QWindow::RasterGLSurface);
}


WrapperWindow::~WrapperWindow(){
  qDebug() << "WrapperWindow Dtor";
}