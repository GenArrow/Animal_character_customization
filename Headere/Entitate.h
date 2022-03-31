#pragma once
#include "Exceptie.h"

class Entitate{
public:
    int id_entitate;
    Entitate();
    [[nodiscard]] int get_id() const;

    virtual void toString() const;
};

int isnumber(const string &s);