#pragma once
#include "Generic_Repo.h"

class Caine: public Entitate {
private:
    string nume, dog_color, hat_color, glasses_type, has_pendant;

public:

    inline static RepositoryFile<Caine> repo;
    Caine() = default;
    Caine(int id, string& nume, string& dog_color, string& hat_color, string& glasses_type, string& has_pendant);
    ~Caine() = default;

    void toString() const;
    static Caine str_to_ob(const string&);
    [[nodiscard]] string ob_to_str();
    static void getSize();

    [[nodiscard]] const string &getNume() const;

    void setNume(const string &nume);

    [[nodiscard]] string getHasPendant() const;

    void setHasPendant(string& hasPendant);

    [[nodiscard]] const string &getDogColor() const;

    void setCatColor(const string &dogColor);

    [[nodiscard]] const string &getHatColor() const;

    void setHatColor(const string &hatColor);

    [[nodiscard]] const string &getGlassesType() const;

    void setGlassesType(const string &glassesType);

};