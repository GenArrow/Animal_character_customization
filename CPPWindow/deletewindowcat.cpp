#include "../HeadereWindow/deletewindowcat.h"
#include "../UI/ui_deletewindowcat.h"

DeleteWindowCat::DeleteWindowCat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteWindowCat)
{
    ui->setupUi(this);
}

DeleteWindowCat::~DeleteWindowCat()
{
    delete ui;
}

void DeleteWindowCat::on_pushButton_clicked()
{
    string id, errors;
    id = ui->lineEdit->text().toStdString();
    if(!isnumber(id) || id.empty()) errors += "invalid ID\n";
    else if(ServicePisici::idCcheck(stoi(id))) errors += "Nu exista entitate cu ID " + id + "\n";

    if(errors.empty())
    {ServicePisici::delete_pisica(stoi(id)); this->close();}
    else
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr(errors.c_str()) + "</FONT>");
    }
}