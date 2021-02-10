#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>

namespace Ui {
class gamewindow;
}

class gamewindow : public QWidget
{
    Q_OBJECT

public:
    explicit gamewindow(QWidget *parent = nullptr);
    ~gamewindow();

private slots:
    void on_back_pushButton_clicked();

    void on_reset_pushButton_clicked();

private:
    Ui::gamewindow *ui;

    int grassesNumber;
    int cowsNumber;
    int tigersNumber;
};

#endif // GAMEWINDOW_H
