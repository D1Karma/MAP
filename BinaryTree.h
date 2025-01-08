#ifndef ARBORE_BINAR_H
#define ARBORE_BINAR_H

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

public:
    ArboreBinar();
    void insereaza(int valoare);
    void parcurgerePreOrdine() const;
};

#endif