#ifndef FENSTER_1_H
#define FENSTER_1_H

#include <QMainWindow>

namespace Ui {
class Fenster_1;
}

class Fenster_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fenster_1(QWidget *parent = 0);
    ~Fenster_1();

private:
    Ui::Fenster_1 *ui;
};

#endif // FENSTER_1_H
