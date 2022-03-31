#ifndef UPDATEWINDOWDOG_H
#define UPDATEWINDOWDOG_H

#include <QMainWindow>
#include "../Headere/ServiceCaini.h"

QT_BEGIN_NAMESPACE
namespace Ui { class UpdateWindowDog; }
QT_END_NAMESPACE

class UpdateWindowDog : public QMainWindow
{
    Q_OBJECT

public:
    UpdateWindowDog(QWidget *parent = nullptr);
    ~UpdateWindowDog();

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
    string dogCol, hatCol;
    Ui::UpdateWindowDog *ui;
};
#endif // UPDATEWINDOWDOG_H
