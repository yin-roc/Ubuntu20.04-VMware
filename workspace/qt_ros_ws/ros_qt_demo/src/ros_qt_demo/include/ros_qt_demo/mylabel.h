#ifndef MYLABEL_H
#define MYLABEL_H

#include <QDebug>
#include <QDrag>
#include <QMouseEvent>
#include <QPainter>
#include <QTimer>
#include <QWidget>
#include <QLabel>
#include <QResizeEvent>
#include <QtMath>
class MyLabel : public QLabel {
  Q_OBJECT

 public:
  MyLabel(QWidget *parent = 0);
  ~MyLabel();
  enum {
    upleft = 0,
    up,
    upright,
    left,
    stop,
    right,
    downleft,
    down,
    downright
  };
 signals:
  void keyNumchanged(int num);

 protected:
  void paintEvent(QPaintEvent *event) override;
  void mouseMoveEvent(QMouseEvent *event) override;
  void mouseReleaseEvent(QMouseEvent *event) override;
  void mousePressEvent(QMouseEvent *event) override;
  void resizeEvent(QResizeEvent *event)override;
  //  void resizeEvent(QResizeEvent *event)override;
 private:
  int mouseX;
  int mouseY;
  int JoyStickX;  //摇杆
  int JoyStickY;
  int JoyStickR;
  int padX;  //底盘
  int padY;
  int padR;
  double handPadDis;  //两圆圆心距离
  bool mousePressed;
  QTimer *tim;
  QLabel *image;
  QPixmap map_px;
  QImage *imgg;

 private:
  double Pointdis(int a, int b, int x, int y);  //两点距离
  int getKeyNum();
};

#endif
