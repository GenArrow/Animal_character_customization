#ifndef ADDWINDOWDOG_H
#define ADDWINDOWDOG_H

#include <QMainWindow>
#include "../Headere/ServiceCaini.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AddWindowDog; }
QT_END_NAMESPACE

class AddWindowDog : public QMainWindow
{
    Q_OBJECT

public:
    AddWindowDog(QWidget *parent = nullptr);
    ~AddWindowDog();

private slots:
    void on_ColorCatButton_clicked();

    void on_ColorHatButton_clicked();

    void on_pushButton_clicked();

private:
    string dogCol, hatCol;
    Ui::AddWindowDog *ui;
};
#endif // ADDWINDOWDOG_H
