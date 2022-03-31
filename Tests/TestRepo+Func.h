#pragma once
#include "../Headere/ServicePisici.h"

void testRepo()
{//vai de capu meu ce ii aici

    string n1="Miguel",n2="Rye",n3="Chris",n4="Tony",n5="Michael",n6="Tigra",n7="Pisi",n8="Zubenelgenubi",n9="Ekeng",n10="Casey",n11="DeleteT";
    string c1="ffffcc",c2="223456",c3="323456",c4="423456",c5="adab7a",c6="a77734",c7="878787",c8="2a2a2a",c9="730f95",c10="ffb2f7";
    string h1="ccffff",h2="f34567",h3="ffa4a4",h4="005d0e",h5="2a2a2a",h6="a0cbff",h7="47a9e6";
    string o1="3D",o2="Sunglasses";
    string N = "N-are", A = "Are";

    Pisica::repo.create(Pisica(1, n1, c1, h1, o1, A));
    Pisica::repo.create(Pisica(2, n2, c2, h2, o1, N));
    Pisica::repo.create(Pisica(3, n3, c3, N, o2, A));
    Pisica::repo.create(Pisica(4, n4, c4, N, N, N));
    Pisica::repo.create(Pisica(5, n5, c5, h3, o2, N));
    Pisica::repo.create(Pisica(6, n6, c6, h4, N, A));
    Pisica::repo.create(Pisica(7, n7, c7, N, N, A));
    Pisica::repo.create(Pisica(8, n8, c8, h5, o2, A));
    Pisica::repo.create(Pisica(9, n9, c9, h6, o1, A));
    Pisica::repo.create(Pisica(10, n10, c10, h7, o2, A));
    Pisica::repo.create(Pisica(11, n11, c10, h7, o2, A));


    assert(Pisica::repo.getFromFile().size()==11);

    string a1="Caseyy",a2="#eeb2f7",a3="#47a9e6", a4="3D", a5="N-are";
    Pisica::repo.update(Pisica(10, a1, a2, a3, a4, a5));

    assert(Pisica::repo.findbyid(10).getNume() == "Caseyy");
    assert(Pisica::repo.findbyid(10).getGlassesType() == "3D");
    assert(Pisica::repo.findbyid(10).getHasPendant() == "N-are");
    assert(Pisica::repo.findbyid(10).getCatColor() == "#eeb2f7");
    assert(Pisica::repo.findbyid(10).getHatColor() == "#47a9e6");

    Pisica::repo.remove(11);

    assert(ServicePisici::idCcheck(11) == 1);
    assert(Pisica::repo.getFromFile().size()==10);

}

void testFunc()
{
    string m = "Mi";
    assert(ServicePisici::searchByName(m).size() == 2);
    assert(ServicePisici::searchByName(m)[0].getNume() == "Miguel");
    assert(ServicePisici::searchByName(m)[1].getNume() == "Michael");

    assert(ServicePisici::sortByName().back().getNume() == "Zubenelgenubi");
    assert(ServicePisici::sortByName().front().getNume() == "Caseyy");
}

void tests()
{
    testRepo();
    testFunc();
}