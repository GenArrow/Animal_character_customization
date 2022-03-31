#include "../Headere/Caini.h"

Caine::Caine(int id, string &nume, string &dog_color, string &hat_color, string &glasses_type, string& has_pendant)
{
    this->id_entitate = id;
    this->nume = nume;
    this->dog_color = dog_color;
    this->hat_color = hat_color;
    this->glasses_type = glasses_type;
    this->has_pendant = has_pendant;
}

const string &Caine::getNume() const {
    return nume;
}

void Caine::setNume(const string &num) {
    this->nume = num;
}

string Caine::getHasPendant() const {
    return has_pendant;
}

void Caine::setHasPendant(string& hasPendant) {
    has_pendant = hasPendant;
}

const string &Caine::getDogColor() const {
    return dog_color;
}

void Caine::setCatColor(const string &dogColor) {
    dog_color = dogColor;
}

const string &Caine::getHatColor() const {
    return hat_color;
}

void Caine::setHatColor(const string &hatColor) {
    hat_color = hatColor;
}

const string &Caine::getGlassesType() const {
    return glasses_type;
}

void Caine::setGlassesType(const string &glassesType) {
    glasses_type = glassesType;
}

void Caine::toString() const {

    printf("\nCaine ID %d, nume %s, culoareHex: %s, caciulaHex: %s, ochelari: %s, medalion: %s", this->id_entitate, this->nume.c_str(), this->dog_color.c_str(), this->hat_color.c_str(), this->glasses_type.c_str(), this->has_pendant.c_str());
}

Caine Caine::str_to_ob(const string & line) {

    string parsed, ien, num, colDog, colHat, tipGlass, hasPend;
    stringstream ss1(line);

    getline(ss1, parsed, ' ');
    ien = parsed;
    getline(ss1, parsed, ' ');
    num = parsed;
    getline(ss1, parsed, ' ');
    colDog = parsed;
    getline(ss1, parsed, ' ');
    colHat = parsed;
    getline(ss1, parsed, ' ');
    tipGlass = parsed;
    getline(ss1, parsed, ' ');
    hasPend = parsed;

    return Caine(stoi(ien), num, colDog, colHat, tipGlass, hasPend);
}

string Caine::ob_to_str() {
    string line;
    line += to_string(this->get_id()) + " " + this->nume + " " + this->dog_color + " " + this->hat_color + " " + this->glasses_type + " " + this->has_pendant + ";";
    return line;
}

void Caine::getSize() {
    printf("\n\nCurrent repository size: %llu\n", repo.getFromFile().size());
}
