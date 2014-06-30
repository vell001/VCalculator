#include "add.h"
#include "ui_add.h"

add::add(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
    status = 1;
}

add::~add()
{
    delete ui;
}

void add::dealInputClick(QString value)
{
    switch (this->status)
    {
    case 1:
        this->num1.append(value);
        ui->answer->setText(this->num1);
        break;
    case 2:
        this->num2.append(value);
        ui->answer->setText(this->num2);
        break;
    case 3:
        this->status = 1;
        this->num1 = value;
        this->ans = "";
        ui->answer->setText(this->num1);
        break;
    }
}

void add::on_btn_0_clicked()
{
    dealInputClick("0");
}

void add::on_btn_dot_clicked()
{
    dealInputClick(".");
}

void add::on_btn_1_clicked()
{
    dealInputClick("1");
}

void add::on_btn_2_clicked()
{
    dealInputClick("2");
}

void add::on_btn_3_clicked()
{
    dealInputClick("3");
}

void add::on_btn_4_clicked()
{
    dealInputClick("4");
}

void add::on_btn_5_clicked()
{
    dealInputClick("5");
}

void add::on_btn_6_clicked()
{
    dealInputClick("6");
}

void add::on_btn_7_clicked()
{
    dealInputClick("7");
}

void add::on_btn_8_clicked()
{
    dealInputClick("8");
}

void add::on_btn_9_clicked()
{
    dealInputClick("9");
}

void add::on_btn_a_clicked()
{
    this->dealOperClick(1);
}

void add::on_btn_s_clicked()
{
    this->dealOperClick(2);
}

void add::on_btn_m_clicked()
{
    this->dealOperClick(3);
}

void add::on_btn_d_clicked()
{
    this->dealOperClick(4);
}

void add::on_btn_e_clicked()
{
    switch(this->status)
    {
    case 1:
        this->ans = this->num1;
        break;
    case 2:
        operation();
        break;
    case 3:
        break;
    }
    this->num1 = "";
    this->num2 = "";
    ui->answer->setText(this->ans);
    this->status = 3;
}

void add::operation()
{
    double num1 = this->num1.toDouble();
    double num2 = this->num2.toDouble();
    double ans;
    switch(this->op)
    {
    case 1: ans = num1 + num2; break;
    case 2: ans = num1 - num2; break;
    case 3: ans = num1 * num2; break;
    case 4: ans = num1 / num2; break;
    }
    this->ans = QString::number(ans);
}

void add::dealOperClick(int op)
{
    if(this->status == 3) this->num1 = this->ans;
    this->op = op;
    this->status = 2;
}


void add::on_btn_del_clicked()
{
    switch (this->status)
    {
    case 1:
        this->num1 = this->num1.left(this->num1.length()-1);
        ui->answer->setText(this->num1);
        break;
    case 2:
        this->num2 = this->num2.left(this->num1.length()-1);
        ui->answer->setText(this->num2);
        break;
    case 3:
        this->status = 1;
        this->num1 = this->ans.left(this->ans.length()-1);
        this->ans = "";
        ui->answer->setText(this->num1);
        break;
    }
}
