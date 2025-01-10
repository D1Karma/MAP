#ifndef ARBORE_BINAR_H
#define ARBORE_BINAR_H

#include <vector>

struct Nod {
    int valoare;
    Nod* stanga;
    Nod* dreapta;

    Nod(int val) : valoare(val), stanga(nullptr), dreapta(nullptr) {}
};

class ArboreBinar {
private:
    Nod* radacina;

    void preOrdine(Nod* nod) const;
    void inOrdine(Nod* nod) const;
    void postOrdine(Nod* nod) const;

public:
    ArboreBinar();
    void insereaza(int valoare);
    void parcurgerePreOrdine() const;
    void parcurgereInOrdine() const;
    void parcurgerePostOrdine() const;
    void insereazaRandom(int numarElemente, int min, int max);
};

#endif
