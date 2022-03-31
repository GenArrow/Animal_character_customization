#ifndef DELETEWINDOWCAT_H
#define DELETEWINDOWCAT_H

#include <QMainWindow>
#include "../Headere/ServicePisici.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DeleteWindowCat; }
QT_END_NAMESPACE

class DeleteWindowCat : public QMainWindow
{
    Q_OBJECT

public:
    DeleteWindowCat(QWidget *parent = nullptr);
    ~DeleteWindowCat();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DeleteWindowCat *ui;
};
#endif // DELETEWINDOWCAT_H
