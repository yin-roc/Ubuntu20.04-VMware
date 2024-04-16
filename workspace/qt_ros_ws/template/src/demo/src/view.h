#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
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
