#ifndef BASIC_H
#define BASIC_H

#include <QWidget>

namespace Ui {
class Basic;
}

class Basic : public QWidget
{
    Q_OBJECT

public:
    explicit Basic(QWidget *parent = nullptr);
    ~Basic();

private slots:
    void on_pushButton_start_clicked();

    void on_pushButton_turtle_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Basic *ui;
};

#endif // BASIC_H
