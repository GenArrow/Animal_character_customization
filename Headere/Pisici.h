#pragma once
#include "Generic_Repo.h"

class Pisica: public Entitate {
private:
    string nume, cat_color, hat_color, glasses_type, has_pendant;

public:

    inline static RepositoryFile<Pisica> repo;
    Pisica() = default;
    Pisica(int id, string& nume, string& cat_color, string& hat_color, string& glasses_type, string& has_pendant);
    ~Pisica() = default;

    void toString() const;
    static Pisica str_to_ob(const string&);
    [[nodiscard]] string ob_to_str();
    static void getSize();

    [[nodiscard]] const string &getNume() const;

    void setNume(const string &nume);

    [[nodiscard]] string getHasPendant() const;

    void setHasPendant(string& hasPendant);

    [[nodiscard]] const string &getCatColor() const;

    void setCatColor(const string &catColor);

    [[nodiscard]] const string &getHatColor() const;

    void setHatColor(const string &hatColor);

    [[nodiscard]] const string &getGlassesType() const;

    void setGlassesType(const string &glassesType);

};