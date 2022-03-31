#ifndef UPDATEWINDOWCAT_H
#define UPDATEWINDOWCAT_H

#include <QMainWindow>
#include "../Headere/ServicePisici.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UpdateWindowCat; }
QT_END_NAMESPACE

class UpdateWindowCat : public QMainWindow
{
    Q_OBJECT

public:
    UpdateWindowCat(QWidget *parent = nullptr);
    ~UpdateWindowCat();

private slots:
    void on_ColorCatButton_clicked();

    void on_ColorHatButton_clicked();

    void on_pushButton_clicked();

    void on_checkBoxRemoveHat_stateChanged(int arg1);

    void on_checkBoxRemoveGlasses_stateChanged(int arg1);

    void on_checkBoxRemovePendant_stateChanged(int arg1);

    void on_checkBoxHat_stateChanged(int arg1);

    void on_checkBoxPendant_stateChanged(int arg1);

    void on_radioButtonSUN_clicked();

    void on_radioButton3D_clicked();
private:
    string catCol, hatCol;
    Ui::UpdateWindowCat *ui;
};
#endif // UPDATEWINDOWCAT_H
