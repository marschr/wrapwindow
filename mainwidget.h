#include <QWidget>

#include <QVBoxLayout>
#include <QLabel>


class MainWidget : public QWidget {
  Q_OBJECT
public:
  MainWidget(QWidget *parent = 0);

    QVBoxLayout* vbl;
    QLabel* label;
};