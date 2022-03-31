#include "../HeadereWindow/mainwindow.h"
#include "../UI/ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menubar->setStyleSheet("color: rgb(230, 230, 230);}");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::print_entitati_to_list()
{
    QListWidgetItem *item;
    ui->listWidget->clear();
    for(auto& el:Pisica::repo.getFromFile())
    {
        item = new QListWidgetItem();
        string p = "Pisica ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getCatColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
        item->setText(p.c_str());
        item->setForeground(QBrush(QColor("lightGray")));
        ui->listWidget->addItem(item);
    }
}

void MainWindow::on_GoToDogsButton_clicked()
{
    auto *dw = new DogWindow;
    dw->show();
    dw->setFixedSize(size());
    dw->print_entitati_to_list();
    this->destroy();
}

void MainWindow::on_GoToFuncButton_clicked()
{
    auto *dw = new FuncWindow;
    dw->show();
    dw->setFixedSize(size());
    this->destroy();
}

void MainWindow::on_ReloadCatsButton_clicked()
{
    print_entitati_to_list();
}

void MainWindow::on_UndoCatButton_clicked()
{
    try{UndoRedo::undo();}
    catch(Exceptie& e)
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr(e.getMessage().c_str()) + "</FONT>");
    }
}

void MainWindow::on_RedoCatButton_clicked()
{
    try{UndoRedo::redo();}
    catch(Exceptie& e)
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr(e.getMessage().c_str()) + "</FONT>");
    }
}

void MainWindow::on_actionAdd_Cat_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *aw = new AddWindow;
    aw->show();
}

void MainWindow::on_actionDelete_Cat_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *dw = new DeleteWindowCat;
    dw->show();
}

void MainWindow::on_actionUpdate_Cat_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *uw = new UpdateWindowCat;
    uw->show();
}



DogWindow::DogWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::DogWindow)
{
    ui->setupUi(this);
    ui->menubar->setStyleSheet("color: rgb(250, 250, 250);}");
}

DogWindow::~DogWindow()
{
    delete ui;
}

void DogWindow::print_entitati_to_list()
{
    QListWidgetItem *item;
    ui->listWidget->clear();
    for(auto& el:Caine::repo.getFromFile())
    {
        string p = "Caine ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getDogColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
        item = new QListWidgetItem();
        item->setText(p.c_str());
        item->setForeground(QBrush(QColor("lightGray")));
        ui->listWidget->addItem(item);
    }
}

void DogWindow::on_GoToCatsButton_clicked()
{
    auto *dw = new MainWindow;
    dw->show();
    dw->setFixedSize(size());
    dw->print_entitati_to_list();
    this->destroy();
}

void DogWindow::on_GoToFuncButton_clicked()
{
    auto *dw = new FuncWindow;
    dw->show();
    dw->setFixedSize(size());
    this->destroy();
}

void DogWindow::on_ReloadDogsButton_clicked()
{
    print_entitati_to_list();
}

void DogWindow::on_UndoDogButton_clicked()
{
    try{UndoRedo::undo();}
    catch(Exceptie& e)
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr(e.getMessage().c_str()) + "</FONT>");
    }
}

void DogWindow::on_RedoButton_clicked()
{
    try{UndoRedo::redo();}
    catch(Exceptie& e)
    {
        QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr(e.getMessage().c_str()) + "</FONT>");
    }
}

void DogWindow::on_actionAdd_Dog_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *aw = new AddWindowDog;
    aw->show();
}

void DogWindow::on_actionDelete_Dog_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *dw = new DeleteWindowDog;
    dw->show();
}

void DogWindow::on_actionUpdate_Dog_triggered()
{
    this->setWindowModality(Qt::ApplicationModal);
    auto *uw = new UpdateWindowDog;
    uw->show();
}




FuncWindow::FuncWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui(new Ui::FuncWindow)
{
    ui->setupUi(this);
}

FuncWindow::~FuncWindow()
{
    delete ui;
}

void FuncWindow::on_FilterButton_clicked()
{
    ui->listWidget->clear();
    QListWidgetItem *item;

    if(ui->radioButton->isChecked())
    {
        if(ServicePisici::checkHat())
        {
            item = new QListWidgetItem();
            item->setText("\nPisici care au palarie\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Pisica::repo.getFromFile())
            {
                if(el.getHatColor() != "N-are")
                {
                    string p = "Pisica ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getCatColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
        if(ServicePisici::checkGlasses())
        {
            item = new QListWidgetItem();
            item->setText("\nPisici care au ochelari\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Pisica::repo.getFromFile())
            {
                if(el.getGlassesType() != "N-are")
                {
                    string p = "Pisica ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getCatColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
        if(ServicePisici::checkPendant())
        {
            item = new QListWidgetItem();
            item->setText("\nPisici care au medalion\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Pisica::repo.getFromFile())
            {
                if(el.getHasPendant() == "Are")
                {
                    string p = "Pisica ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getCatColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
    }

    if(ui->radioButton_2->isChecked())
    {
        if(ServiceCaini::checkHat())
        {
            item = new QListWidgetItem();
            item->setText("\nCaini care au palarie\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Caine::repo.getFromFile())
            {
                if(el.getHatColor() != "N-are")
                {
                    string p = "Caine ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getDogColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
        if(ServiceCaini::checkGlasses())
        {
            item = new QListWidgetItem();
            item->setText("\nCaini care au ochelari\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Caine::repo.getFromFile())
            {
                if(el.getGlassesType() != "N-are")
                {
                    string p = "Caine ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getDogColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
        if(ServiceCaini::checkPendant())
        {
            item = new QListWidgetItem();
            item->setText("\nCaini care au medalion\n");
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);

            for (auto &el:Caine::repo.getFromFile())
            {
                if(el.getHasPendant() == "Are")
                {
                    string p = "Caine ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getDogColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
                    item = new QListWidgetItem();
                    item->setText(p.c_str());
                    item->setForeground(QBrush(QColor("lightGray")));
                    ui->listWidget->addItem(item);
                }
            }
        }
    }
}

void FuncWindow::on_SortButton_clicked()
{
    if (ui->radioButton_3->isChecked())
    {
        ui->listWidget->clear();
        QListWidgetItem *item;
        for (auto &el:ServicePisici::sortByName())
        {
            string p = "Pisica ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getCatColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
            item = new QListWidgetItem();
            item->setText(p.c_str());
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);
        }
    }
    if (ui->radioButton_4->isChecked())
    {
        ui->listWidget->clear();
        QListWidgetItem *item;
        for (auto &el:ServiceCaini::sortByName())
        {
            string p = "Caine ID " + to_string(el.get_id()) + ", nume " + el.getNume() + ", culoareHex: " + el.getDogColor() + ", caciulaHex: " + el.getHatColor() + ", ochelari: " + el.getGlassesType() + ", medalion: " + el.getHasPendant();
            item = new QListWidgetItem();
            item->setText(p.c_str());
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);
        }
    }
}

void FuncWindow::on_SearchButton_clicked()
{

    string line;
    line = ui->SearchNameLine->text().toStdString();
    if (line.empty()) { QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr("Invalid search token") + "</FONT>"); }
    else
    {
        ui->listWidget->clear();
        QListWidgetItem *item;
        item = new QListWidgetItem();
        string settext = "\nPisici al caror nume contine '" + line + "'\n";
        item->setText(settext.c_str());
        item->setForeground(QBrush(QColor("lightGray")));
        ui->listWidget->addItem(item);

        for(auto &el:ServicePisici::searchByName(line))
        {
            item = new QListWidgetItem();
            item->setText(el.getNume().c_str());
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);
        }

        item = new QListWidgetItem();
        settext = "\nCaini al caror nume contine '" + line + "'\n";
        item->setText(settext.c_str());
        item->setForeground(QBrush(QColor("lightGray")));
        ui->listWidget->addItem(item);

        for(auto &el:ServiceCaini::searchByName(line))
        {
            item = new QListWidgetItem();
            item->setText(el.getNume().c_str());
            item->setForeground(QBrush(QColor("lightGray")));
            ui->listWidget->addItem(item);
        }
    }
}


void FuncWindow::on_ExportButton_clicked()
{
    if(ui->radioButton_5->isChecked())
    {
        ServicePisici::exportHTML();
    }
    if(ui->radioButton_6->isChecked())
    {
        ServiceCaini::exportHTML();
    }
}

void FuncWindow::on_RenderButton_clicked()
{
    string id = ui->IDRenderLine->text().toStdString();
    if(!isnumber(id) || id.empty())
    {QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr("ID is not a number") + "</FONT>");}
    else if(ui->radioButton_7->isChecked())
    {
        if(ServicePisici::idCcheck(stoi(id))) {QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" + tr("Nu exista entitate cu acest ID") + "</FONT>");}
        else{ServicePisici::renderPreviewPython(stoi(id));}
    }
    else if(ui->radioButton_8->isChecked())
    {
        if(ServiceCaini::idCcheck(stoi(id))) {QMessageBox::critical(this, tr("Error"), "<FONT COLOR='#ffffff'>" +  tr("Nu exista entitate cu acest ID") + "</FONT>");}
        else{ServiceCaini::renderPreviewPython(stoi(id));}
    }
}

void FuncWindow::on_GoToCatsButton_clicked()
{
    auto *dw = new MainWindow;
    dw->show();
    dw->setFixedSize(size());
    dw->print_entitati_to_list();
    this->destroy();
}

void FuncWindow::on_pushButton_7_clicked()
{
    auto *dw = new DogWindow;
    dw->show();
    dw->setFixedSize(size());
    dw->print_entitati_to_list();
    this->destroy();
}
//COLORPALETTE
//#include <QColorDialog>
//QMainWindow* test;
//test = new QMainWindow;
//QColor color = QColorDialog::getColor(Qt::black, test, "Pick a color",  QColorDialog::DontUseNativeDialog);
//ui->listWidget->clear();
//QListWidgetItem *item = new QListWidgetItem();
//item->setText(color.name().toStdString().c_str());
//ui->listWidget->addItem(item);
