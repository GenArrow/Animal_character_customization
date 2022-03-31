#include "../HeadereWindow/updatewindowdog.h"
#include "../UI/ui_updatewindowdog.h"

UpdateWindowDog::UpdateWindowDog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UpdateWindowDog)
{
    ui->setupUi(this);
}

UpdateWindowDog::~UpdateWindowDog()
{
    delete ui;
}

void UpdateWindowDog::on_ColorCatButton_clicked()
{
    QMainWindow* test;
    test = new QMainWindow;
    QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color",  QColorDialog::DontUseNativeDialog);
    dogCol = color.name().toStdString();
}

void UpdateWindowDog::on_ColorHatButton_clicked()
{
    if(this->ui->checkBoxHat->isChecked())
    {
        QMainWindow *test;
        test = new QMainWindow;
        QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color", QColorDialog::DontUseNativeDialog);
        hatCol = color.name().toStdString();
    }
}

void UpdateWindowDog::on_pushButton_clicked()
{
    string errors, id, nume, glasses, pendant;
    id = ui->IDLine->text().toStdString();
    nume = ui->NameLine->text().toStdString();
    if(ui->radioButton3D->isChecked()) glasses = "3D";
    else if(ui->radioButtonSUN->isChecked()) glasses = "Sunglasses";
    if(ui->checkBoxPendant->isChecked()) pendant = "Are";
    if(ui->checkBoxRemoveHat->isChecked()) {hatCol = "0";}
    if(ui->checkBoxRemoveGlasses->isChecked()) {glasses = "0";}
    if(ui->checkBoxRemovePendant->isChecked()) {pendant = "0";}

    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(ServiceCaini::idCcheck(stoi(id))) errors += "Nu exista entitate cu ID " + id + "\n";
    else if(ServiceCaini::checkName(nume) && Caine::repo.findbyid(stoi(id)).getNume()!=nume) errors += "Exista un caine cu numele " + nume + "\n";

    if(errors.empty())
    {
        ServiceCaini::update_caine(stoi(id), nume, dogCol, hatCol, glasses, pendant);
        this->close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}

void UpdateWindowDog::on_checkBoxRemoveHat_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxHat->setChecked(false);
    }
}

void UpdateWindowDog::on_checkBoxRemoveGlasses_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->radioButtonSUN->setChecked(false);
        ui->radioButton3D->setChecked(false);
    }
}

void UpdateWindowDog::on_checkBoxRemovePendant_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxPendant->setChecked(false);
    }
}

void UpdateWindowDog::on_checkBoxHat_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxRemoveHat->setChecked(false);
    }
}

void UpdateWindowDog::on_checkBoxPendant_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->checkBoxRemovePendant->setChecked(false);
    }
}

void UpdateWindowDog::on_radioButtonSUN_clicked()
{
    ui->checkBoxRemoveGlasses->setChecked(false);
}

void UpdateWindowDog::on_radioButton3D_clicked()
{
    ui->checkBoxRemoveGlasses->setChecked(false);
}
