#include "../HeadereWindow/addwindowdog.h"
#include "../UI/ui_addwindowdog.h"

AddWindowDog::AddWindowDog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddWindowDog)
{
    ui->setupUi(this);
}

AddWindowDog::~AddWindowDog()
{
    delete ui;
}

void AddWindowDog::on_ColorCatButton_clicked()
{
    QMainWindow* test;
    test = new QMainWindow;
    QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color",  QColorDialog::DontUseNativeDialog);
    dogCol = color.name().toStdString();
}

void AddWindowDog::on_ColorHatButton_clicked()
{
    if(this->ui->checkBoxHat->isChecked())
    {
        QMainWindow *test;
        test = new QMainWindow;
        QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color", QColorDialog::DontUseNativeDialog);
        hatCol = color.name().toStdString();
    }
}

void AddWindowDog::on_pushButton_clicked()
{
    string errors, id, nume, glasses, pendant;
    id = ui->IDLine->text().toStdString();
    nume = ui->NameLine->text().toStdString();
    if(ui->radioButton3D->isChecked()) glasses = "3D";
    else if(ui->radioButtonSUN->isChecked()) glasses = "Sunglasses";
    if(ui->checkBoxPendant->isChecked()) pendant = "Are";

    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(!ServiceCaini::idCcheck(stoi(id))) errors += "Exista entitate cu ID " + id + "\n";
    if(nume.empty()) errors += "invalid nume\n";
    else if(ServiceCaini::checkName(nume)) errors += "Exista un caine cu numele " + nume + "\n";

    if(errors.empty())
    {
        ServiceCaini::create_caine(stoi(id), nume, dogCol, hatCol, glasses, pendant);
        this->close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}
