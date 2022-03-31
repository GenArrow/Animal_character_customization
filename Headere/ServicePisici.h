#pragma once
#include "Pisici.h"

class ServicePisici{
public:
    static void create_pisica(int id, string &nume, string &cat_color, string &hat_color, string &glasses_type, string& has_pendant);
    static void update_pisica(int id, string &nume, string &cat_color, string &hat_color, string &glasses_type, string& has_pendant);
    static void delete_pisica(int i);
    static void show_all_pisici();
    static int idCcheck(int i);

    static int checkName(string& name);
    static int checkHat();
    static int checkGlasses();
    static int checkPendant();

    static vector<Pisica> sortByName();
    static vector<Pisica> searchByName(string& name);

    static void exportHTML();

    static void renderPreviewPython(int i);
};