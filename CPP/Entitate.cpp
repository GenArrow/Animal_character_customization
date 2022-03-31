#include "../Headere/Entitate.h"

Entitate::Entitate() {
    this->id_entitate = 0;
}

int Entitate::get_id() const {
    return this->id_entitate;
}

void Entitate::toString() const {
    printf("Entity with id %d", this->id_entitate);
}

int isnumber(const string &s)
{
    for(char c:s)
    {if(!isdigit(c)) {return 0;}}
    return 1;
}