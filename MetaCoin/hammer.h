#ifndef HAMMER_H
#define HAMMER_H

#include <QMainWindow>

namespace Ui {
    class Hammer;
}

class Hammer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hammer(QWidget *parent = 0);
    ~Hammer();

private:
    Ui::Hammer *ui;
};

#endif // HAMMER_H
