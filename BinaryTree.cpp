#include "BinaryTree.h" // include header file - ul in care sunt declarate functiile clasei
#include <iostream>
#include <cstdlib> // pentru a putea folosi functia rand()
#include <ctime> // biblioteca pentru a lucra cu timp(pentru initializarea generatorului de numere aleatoare)

// constructorul clasei care initializeaza radacina (initial gol)
ArboreBinar::ArboreBinar() : radacina(nullptr) {}

// inserare valoare noua in arbore. daca noua valoare e mai mica decat radacina se verif. subarborele stang...
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
// functie recursiva pentru afisarea in preordine: radacina, stanga, dreapta
void ArboreBinar::preOrdine(Nod* nod) const {
    if (nod) {
        std::cout << nod->valoare << " ";
        preOrdine(nod->stanga);
        preOrdine(nod->dreapta);
    }
}
// functie recursiva pentru afisare in-ordine: stanga, radacina, dreapta
void ArboreBinar::inOrdine(Nod* nod) const {
    if (nod) {
        inOrdine(nod->stanga);
        std::cout << nod->valoare << " ";
        inOrdine(nod->dreapta);
    }
}
// functie recursiva post-ordine: stanga,dreapta,radacina
void ArboreBinar::postOrdine(Nod* nod) const {
    if (nod) {
        postOrdine(nod->stanga);
        postOrdine(nod->dreapta);
        std::cout << nod->valoare << " ";
    }
}
//afiseaza mesaj si apeleaza functiile de parcurgere
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
// generator n valori aleatoare intre min - max si le insereaza in arbore
void ArboreBinar::insereazaRandom(int numarElemente, int min, int max) {
    srand(time(0));
    for (int i = 0; i < numarElemente; ++i) {
        int valoareAleatoare = rand() % (max - min + 1) + min;
        insereaza(valoareAleatoare);
    }
}
