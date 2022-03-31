#include "../Headere/Pisici.h"

Pisica::Pisica(int id, string &nume, string &cat_color, string &hat_color, string &glasses_type, string& has_pendant)
{
    this->id_entitate = id;
    this->nume = nume;
    this->cat_color = cat_color;
    this->hat_color = hat_color;
    this->glasses_type = glasses_type;
    this->has_pendant = has_pendant;
}

const string &Pisica::getNume() const {
    return nume;
}

void Pisica::setNume(const string &num) {
    this->nume = num;
}

string Pisica::getHasPendant() const {
    return has_pendant;
}

void Pisica::setHasPendant(string& hasPendant) {
    has_pendant = hasPendant;
}

const string &Pisica::getCatColor() const {
    return cat_color;
}

void Pisica::setCatColor(const string &catColor) {
    cat_color = catColor;
}

const string &Pisica::getHatColor() const {
    return hat_color;
}

void Pisica::setHatColor(const string &hatColor) {
    hat_color = hatColor;
}

const string &Pisica::getGlassesType() const {
    return glasses_type;
}

void Pisica::setGlassesType(const string &glassesType) {
    glasses_type = glassesType;
}

void Pisica::toString() const {

    printf("\nPisica ID %d, nume %s, culoareHex: %s, caciulaHex: %s, ochelari: %s, medalion: %s", this->id_entitate, this->nume.c_str(), this->cat_color.c_str(), this->hat_color.c_str(), this->glasses_type.c_str(), this->has_pendant.c_str());
}

Pisica Pisica::str_to_ob(const string & line) {

    string parsed, ien, num, colCat, colHat, tipGlass, hasPend;
    stringstream ss1(line);

    getline(ss1, parsed, ' ');
    ien = parsed;
    getline(ss1, parsed, ' ');
    num = parsed;
    getline(ss1, parsed, ' ');
    colCat = parsed;
    getline(ss1, parsed, ' ');
    colHat = parsed;
    getline(ss1, parsed, ' ');
    tipGlass = parsed;
    getline(ss1, parsed, ' ');
    hasPend = parsed;

    return Pisica(stoi(ien), num, colCat, colHat, tipGlass, hasPend);
}

string Pisica::ob_to_str() {
    string line;
    line += to_string(this->get_id()) + " " + this->nume + " " + this->cat_color + " " + this->hat_color + " " + this->glasses_type + " " + this->has_pendant + ";";
    return line;
}

void Pisica::getSize() {
    printf("\n\nCurrent repository size: %llu\n", repo.getFromFile().size());
}
