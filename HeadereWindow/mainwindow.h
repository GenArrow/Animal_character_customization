#pragma once

#include <QMainWindow>
#include "../HeadereWindow/dogwindow.h"
#include "../UI/ui_dogwindow.h"
#include "../HeadereWindow/funcwindow.h"
#include "../UI/ui_funcwindow.h"
#include "../HeadereWindow/addwindow.h"
#include "../HeadereWindow/addwindowdog.h"
#include "../HeadereWindow/updatewindowcat.h"
#include "../HeadereWindow/updatewindowdog.h"
#include "../HeadereWindow/deletewindowcat.h"
#include "../HeadereWindow/deletewindowdog.h"
#include "../UI/ui_addwindow.h"
#include "../UI/ui_addwindowdog.h"
#include "../UI/ui_updatewindowcat.h"
#include "../UI/ui_updatewindowdog.h"
#include "../UI/ui_deletewindowcat.h"
#include "../UI/ui_deletewindowdog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void print_entitati_to_list();

private slots:
    void on_GoToDogsButton_clicked();

    void on_GoToFuncButton_clicked();

    void on_ReloadCatsButton_clicked();

    void on_UndoCatButton_clicked();

    void on_RedoCatButton_clicked();

    void on_actionAdd_Cat_triggered();

    void on_actionDelete_Cat_triggered();

    void on_actionUpdate_Cat_triggered();
private:
    Ui::MainWindow *ui;
};