#ifndef DOGWINDOW_H
#define DOGWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class DogWindow; }
QT_END_NAMESPACE

class DogWindow : public QMainWindow
{
    Q_OBJECT

public:
    DogWindow(QWidget *parent = nullptr);
    ~DogWindow();
    void print_entitati_to_list();

private slots:
    void on_GoToCatsButton_clicked();

    void on_GoToFuncButton_clicked();

    void on_ReloadDogsButton_clicked();

    void on_UndoDogButton_clicked();

    void on_RedoButton_clicked();

    void on_actionAdd_Dog_triggered();

    void on_actionDelete_Dog_triggered();

    void on_actionUpdate_Dog_triggered();

private:
    Ui::DogWindow *ui;
};
#endif // DOGWINDOW_H
