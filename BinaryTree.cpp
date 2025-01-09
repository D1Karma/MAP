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

void ArboreBinar::inOrdine(Nod* nod) const {
    if (nod) {
        inOrdine(nod->stanga);
        std::cout << nod->valoare << " ";
        inOrdine(nod->dreapta);
    }
}

void ArboreBinar::postOrdine(Nod* nod) const {
    if (nod) {
        postOrdine(nod->stanga);
        postOrdine(nod->dreapta);
        std::cout << nod->valoare << " ";
    }
}

void ArboreBinar::parcurgerePreOrdine() const {
    std::cout << "Parcurgere in pre-ordine: ";
    preOrdine(radacina);
    std::cout << "\n";
}

void ArboreBinar::parcurgereInOrdine() const {
    std::cout << "Parcurgere in ordine: ";
    inOrdine(radacina);
    std::cout << "\n";
}

void ArboreBinar::parcurgerePostOrdine() const {
    std::cout << "Parcurgere in post-ordine: ";
    postOrdine(radacina);
    std::cout << "\n";
}
