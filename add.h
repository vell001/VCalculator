#ifndef ADD_H
#define ADD_H

#include <QMainWindow>

namespace Ui {
class add;
}

class add : public QMainWindow
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = 0);
    ~add();
    void dealInputClick(QString value);
    void dealOperClick(int op);
    void operation();

private slots:
    void on_btn_0_clicked();

    void on_btn_dot_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_5_clicked();

    void on_btn_4_clicked();

    void on_btn_7_clicked();

    void on_btn_6_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_a_clicked();

    void on_btn_s_clicked();

    void on_btn_m_clicked();

    void on_btn_d_clicked();

    void on_btn_e_clicked();

    void on_btn_del_clicked();

private:
    Ui::add *ui;
    int status;
    // 1:?????
    // 2:?????
    // 3:????
    int op;
    // 1:+
    // 2:-
    // 3:*
    // 4:/

    QString num1;
    QString num2;
    QString ans;
};

#endif // ADD_H
