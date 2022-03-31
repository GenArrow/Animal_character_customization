#ifndef DELETEWINDOWDOG_H
#define DELETEWINDOWDOG_H

#include <QMainWindow>
#include "../Headere/ServiceCaini.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DeleteWindowDog; }
QT_END_NAMESPACE

class DeleteWindowDog : public QMainWindow
{
    Q_OBJECT

public:
    DeleteWindowDog(QWidget *parent = nullptr);
    ~DeleteWindowDog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteWindowDog *ui;
};
#endif // DELETEWINDOWDOG_H
