#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QWidget>

namespace Ui {
class SecWindow;
}

class SecWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

private:
    Ui::SecWindow *ui;
};

#endif // SECWINDOW_H
