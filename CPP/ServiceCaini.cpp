#include "../Headere/ServiceCaini.h"

void
ServiceCaini::create_caine(int id, string &nume, string &dog_color, string &hat_color, string &glasses_type, string& has_pendant) {

    if(dog_color.empty()) dog_color = "N-are";
    if(hat_color.empty()) hat_color = "N-are";
    if(glasses_type.empty()) glasses_type = "N-are";
    if(has_pendant.empty()) has_pendant = "N-are";

    Caine::repo.create(Caine(id, nume, dog_color, hat_color, glasses_type, has_pendant));
}

void
ServiceCaini::update_caine(int id, string &nume, string &dog_color, string &hat_color, string &glasses_type, string& has_pendant) {

    Caine p = Caine::repo.findbyid(id);

    if(nume.empty()) nume = p.getNume();
    if(dog_color.empty()) dog_color = p.getDogColor();
    if(hat_color.empty()) hat_color = p.getHatColor();
    else if(hat_color == "0") hat_color = "N-are";
    if(glasses_type.empty()) glasses_type = p.getGlassesType();
    else if(glasses_type == "0") glasses_type = "N-are";
    if(has_pendant.empty()) has_pendant = p.getHasPendant();
    else if(has_pendant == "0") has_pendant = "N-are";

    Caine::repo.update(Caine(id, nume, dog_color, hat_color, glasses_type, has_pendant));
}

void ServiceCaini::delete_caine(int i) {
    Caine::repo.remove(i);
}

void ServiceCaini::show_all_caini() {
    for(auto& c:Caine::repo.getFromFile())
        c.toString();
    Caine::getSize();
}

int ServiceCaini::idCcheck(int i) {
    return Caine::repo.idcheck(i);
}

int ServiceCaini::checkName(string &name) {
    for(auto& p:Caine::repo.getFromFile())
    {if(p.getNume() == name)
        {return 1;}}
    return 0;
}

int ServiceCaini::checkHat() {
    for(auto& p:Caine::repo.getFromFile())
    {if(p.getHatColor() != "N-are")
        {return 1;}}
    return 0;
}

int ServiceCaini::checkGlasses() {
    for(auto& p:Caine::repo.getFromFile())
    {if(p.getGlassesType() != "N-are")
        {return 1;}}
    return 0;
}

int ServiceCaini::checkPendant() {
    for(auto& p:Caine::repo.getFromFile())
    {if(p.getHasPendant() != "N-are")
        {return 1;}}
    return 0;
}

vector<Caine> ServiceCaini::sortByName() {
    vector<Caine> vec = Caine::repo.getFromFile();

    sort(vec.begin(), vec.end(),[](Caine const &p1, Caine const &p2) {return p1.getNume() < p2.getNume();});
    return vec;
}

vector<Caine> ServiceCaini::searchByName(string& name) {
    vector<Caine> vec;
    for(auto& p:Caine::repo.getFromFile())
    {if(p.getNume().find(name) != string::npos)
        {vec.emplace_back(p);}}
    return vec;
}

void ServiceCaini::exportHTML() {
    string filename = "exportFile.html";
    UndoRedo::clearfile(filename);
    fstream Efile(filename);
    Efile << "<!DOCTYPE html><html><head></head><body>";
    Efile << R"(<h2>Tabel Caini </h2><table style="border-collapse: collapse; width: 100%; height: 60px;" border="1"><tbody><tr style="height: 30px;">)";
    for(auto& p:Caine::repo.getFromFile())
    {
        Efile << R"(<td style="width: 15%; height: 30px;"><strong>ID: )" << to_string(p.get_id()) << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Nume: )" << p.getNume()
              << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Culoare: )" << p.getDogColor() << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Palarie: )" << p.getHatColor()
              << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Ochelari: )" << p.getGlassesType() << R"(</strong></td><td style="width: 15%; height: 30px;"><strong>Medalion: )" << p.getHasPendant() << "</strong></td></tr>";
    }
    Efile << "</tbody></table>";
    Efile << "</body></html>";
    ShellExecute(nullptr, "open", "exportFile.html",nullptr, nullptr, SW_SHOWNORMAL);
    Efile.close();
}

void ServiceCaini::renderPreviewPython(int i) {

    Caine p = Caine::repo.findbyid(i);
    string filename = "tempFileForPreview.csv", line = p.ob_to_str();
    UndoRedo::clearfile(filename);
    UndoRedo::write_after_clear(filename, line);

    //system("pip install Pillow");
    //system("pip install blend-modes");
    string filenameexe = R"(C:\Users\Mociran\Desktop\PseudoFinal\EditorDog.py)";
    string command = "python ";
    command += filenameexe + " -s";
    system(command.c_str());

}