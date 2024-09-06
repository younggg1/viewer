#include "widget.h"
#include "ui_widget.h"
#include "QProcess"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_DxdiagpushButton_clicked()
{
    QString program = "dxdiag";
    QProcess *myprocess = new QProcess(this);
    myprocess->start(program);
}


void Widget::on_RegeditpushButton_clicked()
{
    QString program = "regedit";
    QProcess *myprocess = new QProcess(this);
    myprocess->start(program);
}


void Widget::on_SysProAdpushButton_clicked()
{
    QString program = "SystemPropertiesAdvanced";
    QProcess *myprocess = new QProcess(this);
    myprocess->start(program);
}
