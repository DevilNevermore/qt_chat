#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetWork>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpServer *tcpServer;
    void init_server_tcp();

private slots:
void sendMessage();

};

#endif // WIDGET_H
