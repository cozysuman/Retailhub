#include "order.h"
#include "ui_order.h"

Order::Order(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);
}

Order::~Order()
{
    delete ui;
}


void Order::on_create_order_clicked()
{

}
