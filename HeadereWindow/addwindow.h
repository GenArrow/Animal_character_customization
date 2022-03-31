#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QMainWindow>
#include "../Headere/ServicePisici.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AddWindow; }
QT_END_NAMESPACE

class AddWindow : public QMainWindow
{
    Q_OBJECT

public:
    AddWindow(QWidget *parent = nullptr);
    ~AddWindow();

private slots:
    void on_ColorCatButton_clicked();

    void on_ColorHatButton_clicked();

    void on_pushButton_clicked();
private:
    string catCol, hatCol;
    Ui::AddWindow *ui;
};
#endif // ADDWINDOW_H
