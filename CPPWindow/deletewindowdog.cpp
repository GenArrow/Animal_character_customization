#include "../HeadereWindow/deletewindowdog.h"
#include "../UI/ui_deletewindowdog.h"

DeleteWindowDog::DeleteWindowDog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteWindowDog)
{
    ui->setupUi(this);
}

DeleteWindowDog::~DeleteWindowDog()
{
    delete ui;
}

void DeleteWindowDog::on_pushButton_clicked()
{
    string id, errors;
    id = ui->lineEdit->text().toStdString();
    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(ServiceCaini::idCcheck(stoi(id))) errors += "Nu exista entitate cu ID " + id + "\n";

    if(errors.empty())
    {ServiceCaini::delete_caine(stoi(id)); this->close();}
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}