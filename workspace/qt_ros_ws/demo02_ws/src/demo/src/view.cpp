#include "view.h"
#include "ui_view.h"
#include <QHBoxLayout>
#include <QWebEngineView>

view::view(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::view)
{
    ui->setupUi(this);

    QHBoxLayout *pLayout = new QHBoxLayout(this);

    QWebEngineView * webView = new QWebEngineView(this);
    pLayout->addWidget(webView);
    webView->load(QUrl("http://map.baidu.com/"));
}

view::~view()
{
    delete ui;
}
