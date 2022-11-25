#ifndef CESAR_H
#define CESAR_H

#include <QMainWindow>

namespace Ui {
class cesar;
}

class cesar : public QMainWindow
{
    Q_OBJECT

public:
    explicit cesar(QWidget *parent = nullptr);
    ~cesar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::cesar *ui;
};

#endif // CESAR_H
