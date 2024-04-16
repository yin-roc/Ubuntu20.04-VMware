#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QWebEngineView>
#include <QtWebChannel/QtWebChannel>

namespace Ui {
class view;
}

class view : public QWidget
{
    Q_OBJECT

public:
    explicit view(QWidget *parent = nullptr);
    ~view();

private:
    Ui::view *ui;
};

#endif // VIEW_H
