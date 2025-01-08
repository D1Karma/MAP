#include "BinaryTree.h"
#include <iostream>

ArboreBinar::ArboreBinar() : radacina(nullptr) {}

void ArboreBinar::insereaza(int valoare) {
    if (!radacina) {
        radacina = new Nod(valoare);
    } else {
        Nod* curent = radacina;
        while (true) {
            if (valoare < curent->valoare) {
                if (!curent->stanga) {
                    curent->stanga = new Nod(valoare);
                    break;
                }
                curent = curent->stanga;
            } else {
                if (!curent->dreapta) {
                    curent->dreapta = new Nod(valoare);
                    break;
                }
                curent = curent->dreapta;
            }
        }
    }
}

void ArboreBinar::preOrdine(Nod* nod) const {
    if (nod) {
        std::cout << nod->valoare << " ";
        preOrdine(nod->stanga);
        preOrdine(nod->dreapta);
    }
}

void ArboreBinar::parcurgerePreOrdine() const {
    std::cout << "Parcurgere in pre-ordine: ";
    preOrdine(radacina);
    std::cout << "\n";
}