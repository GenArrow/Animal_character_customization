#include "../HeadereWindow/updatewindowcat.h"
#include "../UI/ui_updatewindowcat.h"

UpdateWindowCat::UpdateWindowCat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UpdateWindowCat)
{
    ui->setupUi(this);
}

UpdateWindowCat::~UpdateWindowCat()
{
    delete ui;
}

void UpdateWindowCat::on_ColorCatButton_clicked()
{
    QMainWindow* test;
    test = new QMainWindow;
    QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color",  QColorDialog::DontUseNativeDialog);
    catCol = color.name().toStdString();
}

void UpdateWindowCat::on_ColorHatButton_clicked()
{
    if(this->ui->checkBoxHat->isChecked())
    {
        QMainWindow *test;
        test = new QMainWindow;
        QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color", QColorDialog::DontUseNativeDialog);
        hatCol = color.name().toStdString();
    }
}

void UpdateWindowCat::on_pushButton_clicked()
{
    string errors, id, nume, glasses, pendant;
    id = ui->IDLine->text().toStdString();
    nume = ui->NameLine->text().toStdString();
    if(ui->radioButton3D->isChecked()) glasses = "3D";
    else if(ui->radioButtonSUN->isChecked()) glasses = "Sunglasses";
    if(ui->checkBoxPendant->isChecked()) pendant = "Are";
    if(ui->checkBoxRemoveHat->isChecked()) hatCol = "0";
    if(ui->checkBoxRemoveGlasses->isChecked()) glasses = "0";
    if(ui->checkBoxRemovePendant->isChecked()) pendant = "0";


    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(ServicePisici::idCcheck(stoi(id))) errors += "Nu exista entitate cu ID " + id + "\n";
    else if(ServicePisici::checkName(nume) && Pisica::repo.findbyid(stoi(id)).getNume()!=nume) errors += "Exista o pisica cu numele " + nume + "\n";

    if(errors.empty())
    {
        ServicePisici::update_pisica(stoi(id), nume, catCol, hatCol, glasses, pendant);
        this->close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}

void UpdateWindowCat::on_checkBoxRemoveHat_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxHat->setChecked(false);
    }
}

void UpdateWindowCat::on_checkBoxRemoveGlasses_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->radioButton3D->setAutoExclusive(false);
        ui->radioButtonSUN->setAutoExclusive(false);
        if(ui->radioButtonSUN->isChecked()) ui->radioButtonSUN->setChecked(false);
        else if(ui->radioButton3D->isChecked()) ui->radioButton3D->setChecked(false);
        ui->radioButton3D->setAutoExclusive(true);
        ui->radioButtonSUN->setAutoExclusive(true);
    }
}

void UpdateWindowCat::on_checkBoxRemovePendant_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxPendant->setChecked(false);
    }
}

void UpdateWindowCat::on_checkBoxHat_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxRemoveHat->setChecked(false);
    }
}

void UpdateWindowCat::on_checkBoxPendant_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxRemovePendant->setChecked(false);
    }
}

void UpdateWindowCat::on_radioButtonSUN_clicked()
{
    ui->checkBoxRemoveGlasses->setChecked(false);
}

void UpdateWindowCat::on_radioButton3D_clicked()
{
    ui->checkBoxRemoveGlasses->setChecked(false);
}
