#include <QWindow>
#include <QDebug>
#include <QOpenGLWidget>

class OpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
  OpenGLWidget();
  ~OpenGLWidget();
protected:
  void initializeGL();
  void resizeGL(int width, int height);
  void paintGL();
};

class WrapperWindow : public QWindow
{
    Q_OBJECT

public:
  explicit WrapperWindow(QWindow *parent = nullptr);;
  ~WrapperWindow();


};