// asigura ca fisierul este inclus o singura data la compilare
#ifndef ARBORE_BINAR_H
#define ARBORE_BINAR_H

// structura nod
struct Nod {
    int valoare;
    Nod* stanga;
    Nod* dreapta;
// initializeaza nodul, nodul nu are copii initial (nullptr)
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
