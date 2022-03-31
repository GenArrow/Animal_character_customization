#include "../Headere/ServicePisici.h"

void
ServicePisici::create_pisica(int id, string &nume, string &cat_color, string &hat_color, string &glasses_type, string& has_pendant) {

    if(cat_color.empty()) cat_color = "N-are";
    if(hat_color.empty()) hat_color = "N-are";
    if(glasses_type.empty()) glasses_type = "N-are";
    if(has_pendant.empty()) has_pendant = "N-are";

    Pisica::repo.create(Pisica(id, nume, cat_color, hat_color, glasses_type, has_pendant));
}

void
ServicePisici::update_pisica(int id, string &nume, string &cat_color, string &hat_color, string &glasses_type, string& has_pendant) {

    Pisica p = Pisica::repo.findbyid(id);

    if(nume.empty()) nume = p.getNume();
    if(cat_color.empty()) cat_color = p.getCatColor();
    if(hat_color.empty()) hat_color = p.getHatColor();
    else if(hat_color == "0") hat_color = "N-are";
    if(glasses_type.empty()) glasses_type = p.getGlassesType();
    else if(glasses_type == "0") glasses_type = "N-are";
    if(has_pendant.empty()) has_pendant = p.getHasPendant();
    else if(has_pendant == "0") has_pendant = "N-are";

    Pisica::repo.update(Pisica(id, nume, cat_color, hat_color, glasses_type, has_pendant));
}

void ServicePisici::delete_pisica(int i) {
    Pisica::repo.remove(i);
}

void ServicePisici::show_all_pisici() {
    for(auto& p:Pisica::repo.getFromFile())
        p.toString();
    Pisica::getSize();
}

int ServicePisici::idCcheck(int i) {
    return Pisica::repo.idcheck(i);
}

int ServicePisici::checkName(string &name) {
    for(auto& p:Pisica::repo.getFromFile())
    {if(p.getNume() == name)
        {return 1;}}
    return 0;
}

int ServicePisici::checkHat() {
    for(auto& p:Pisica::repo.getFromFile())
    {if(p.getHatColor() != "N-are")
        {return 1;}}
    return 0;
}

int ServicePisici::checkGlasses() {
    for(auto& p:Pisica::repo.getFromFile())
    {if(p.getGlassesType() != "N-are")
        {return 1;}}
    return 0;
}

int ServicePisici::checkPendant() {
    for(auto& p:Pisica::repo.getFromFile())
    {if(p.getHasPendant() != "N-are")
        {return 1;}}
    return 0;
}

vector<Pisica> ServicePisici::sortByName() {
    vector<Pisica> vec = Pisica::repo.getFromFile();

    sort(vec.begin(), vec.end(),[](Pisica const &p1, Pisica const &p2) {return p1.getNume() < p2.getNume();});
    return vec;
}

vector<Pisica> ServicePisici::searchByName(string& name) {
    vector<Pisica> vec;
    for(auto& p:Pisica::repo.getFromFile())
    {if(strstr(p.getNume().c_str(), name.c_str()))
        {vec.emplace_back(p);}}
    return vec;
}

void ServicePisici::exportHTML() {
    string filename = "exportFile.html";
    UndoRedo::clearfile(filename);
    fstream Efile(filename);
    Efile << "<!DOCTYPE html><html><head></head><body>";
    Efile << R"(<h2>Tabel Pisici </h2><table style="border-collapse: collapse; width: 100%; height: 60px;" border="1"><tbody><tr style="height: 30px;">)";
    for(auto& p:Pisica::repo.getFromFile())
    {
        Efile << R"(<td style="width: 15%; height: 30px;"><strong>ID: )" << to_string(p.get_id()) << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Nume: )" << p.getNume()
        << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Culoare: )" << p.getCatColor() << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Palarie: )" << p.getHatColor()
                << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Ochelari: )" << p.getGlassesType() << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Medalion: )" << p.getHasPendant() << "</strong></td></tr>";
    }
    Efile << "</tbody></table>";
    Efile << "</body></html>";
    ShellExecute(nullptr, "open", "exportFile.html",nullptr, nullptr, SW_SHOWNORMAL);
    Efile.close();
}

void ServicePisici::renderPreviewPython(int i) {

    Pisica p = Pisica::repo.findbyid(i);
    string filename = "tempFileForPreview.csv", line = p.ob_to_str();
    UndoRedo::clearfile(filename);
    UndoRedo::write_after_clear(filename, line);

    //system("pip install Pillow");
    //system("pip install blend-modes");
    string filenameexe = R"(C:\Users\Mociran\Desktop\PseudoFinal\EditorCat.py)";
    string command = "python ";
    command += filenameexe + " -s";
    system(command.c_str());

}
