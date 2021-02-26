#include "mainwidget.h"
#include <QDebug>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent) {
  qDebug() << "MainWidget Ctor";
  vbl = new QVBoxLayout();
  label = new QLabel("TEST LABEL");
  label->setStyleSheet(R"( color: red; font-size: 40px; font-weight: 500; )");
  vbl->addWidget(label);
  setStyleSheet(R"( background-color: green;)");

  setLayout(vbl);

}