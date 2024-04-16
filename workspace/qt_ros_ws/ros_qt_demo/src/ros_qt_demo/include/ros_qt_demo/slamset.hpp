#ifndef SLAMSET_HPP
#define SLAMSET_HPP

#include <QWidget>
#include <QString>
#include <QThread>
#include <QDebug>
#include <QDir>
#include <QSet>
#include "slamresviewer.hpp"

namespace Ui {
class slamSet;
}
class FileCheckThread;
class SlamResViewer;

class slamSet : public QWidget
{
    Q_OBJECT

public:
    explicit slamSet(QWidget *parent = nullptr);
    ~slamSet();
    //private slots
private slots:
    void on_lowest_height_confirm_clicked();
    void on_highest_height_confirm_clicked();
    void on_clr_screen_button_clicked();
    void on_reload_bag_clicked();
    void on_confirm_button_clicked();
    void on_cancel_button_clicked();
    void on_add_brkpoint_btn_clicked();
    void on_del_brkpoint_btn_clicked();
    void on_reveal_brkpoint_btn_clicked();
    void on_pushButton_clicked();

public:
    Ui::slamSet *ui;

    //private members
private:
    double _lowestHeight;
    double _highestHeight;
    //QString _slamBagName;
    QString _finalCmd;
    FileCheckThread* _fileCheckThread;
    QString _savePath;
    QString _bagPath;
    QString _slamShName;
    QVector<double> _brkPoints;

    QDir _imagePath;
    QStringList _imageList;
    QStringList _filter;
    SlamResViewer* _srv;

    //private methods
private:
    void _checkBothConfirmed();
    void _showHeightSetInfo();
    inline void _showInfo(const QString& s) const;
    inline void _showWrongInfo(const QString& msg);
    bool _checkedHeightValid(const QString& height);
    void init();
    void deleteHeap();
    void _setBrkPointBtn(bool);
    void _initUi();
    void _showSlamRes();
    bool eventFilter(QObject *obj, QEvent *event);
    bool scanData(const QDir& fromDir, const QStringList& filters);
    void resizeEvent(QResizeEvent *event);
    void _showPic(const QString& pic);
    QString executeLinuxCmd(const QString& cmd)const;

signals:
    void _sendFinalSlamShCmd(const QString& cmd)const;
};

class FileCheckThread : public QThread{

    Q_OBJECT
public:
    explicit FileCheckThread(slamSet* sm);
    ~FileCheckThread();
    void run();
private:
    slamSet* _sm;
    QStringList _fileNameList;
    QStringList _filter;
    QDir _searchDir;
    bool scanData(const QDir& fromDir, const QStringList& filters);
    void _threadInit();
};

#endif // SLAMSET_HPP
