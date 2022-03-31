#pragma once
#include "Caini.h"

class ServiceCaini{
public:
    static void create_caine(int id, string &nume, string &dog_color, string &hat_color, string &glasses_type, string& has_pendant);
    static void update_caine(int id, string &nume, string &dog_color, string &hat_color, string &glasses_type, string& has_pendant);
    static void delete_caine(int i);
    static void show_all_caini();
    static int idCcheck(int i);

    static int checkName(string& name);
    static int checkHat();
    static int checkGlasses();
    static int checkPendant();

    static vector<Caine> sortByName();
    static vector<Caine> searchByName(string& name);

    static void exportHTML();

    static void renderPreviewPython(int i);

};