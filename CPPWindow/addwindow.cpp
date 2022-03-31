#include "../HeadereWindow/addwindow.h"
#include "../UI/ui_addwindow.h"

AddWindow::AddWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddWindow)
{
    ui->setupUi(this);
}

AddWindow::~AddWindow()
{
    delete ui;
}

void AddWindow::on_ColorCatButton_clicked()
{
    QMainWindow* test;
    test = new QMainWindow;
    QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color",  QColorDialog::DontUseNativeDialog);
    catCol = color.name().toStdString();
}

void AddWindow::on_ColorHatButton_clicked()
{
    if(this->ui->checkBoxHat->isChecked())
    {
        QMainWindow *test;
        test = new QMainWindow;
        QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color", QColorDialog::DontUseNativeDialog);
        hatCol = color.name().toStdString();
    }
}

void AddWindow::on_pushButton_clicked()
{
    string errors, id, nume, glasses, pendant;
    id = ui->IDLine->text().toStdString();
    nume = ui->NameLine->text().toStdString();
    if(ui->radioButton3D->isChecked()) glasses = "3D";
    else if(ui->radioButtonSUN->isChecked()) glasses = "Sunglasses";
    if(ui->checkBoxPendant->isChecked()) pendant = "Are";

    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(!ServicePisici::idCcheck(stoi(id))) errors += "Exista entitate cu ID " + id + "\n";
    if(nume.empty()) errors += "invalid nume\n";
    else if(ServicePisici::checkName(nume)) errors += "Exista o pisica cu numele " + nume + "\n";

    if(errors.empty())
    {
        ServicePisici::create_pisica(stoi(id), nume, catCol, hatCol, glasses, pendant);
        this->close();
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}