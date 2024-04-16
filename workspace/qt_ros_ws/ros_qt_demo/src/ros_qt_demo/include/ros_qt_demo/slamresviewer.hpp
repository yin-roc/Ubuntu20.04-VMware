#ifndef SLAMRESVIEWER_H
#define SLAMRESVIEWER_H


#include <QWidget>
#include <QDir>
#include <QStringList>

namespace Ui {
class SlamResViewer;
}

class SlamResViewer : public QWidget
{
    Q_OBJECT

public:
    explicit SlamResViewer(QDir ip, QStringList il);
    ~SlamResViewer();

private:
    Ui::SlamResViewer *ui;
    void resizeEvent(QResizeEvent *event);
    QDir _imagePath;
    QStringList _imageList;
    void _showPic(const QString& pic);
    bool eventFilter(QObject *obj, QEvent *event);
    void init();
};

#endif // SLAMRESVIEWER_H
