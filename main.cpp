#include "BinaryTree.h"
#include <iostream>

int main() {
    ArboreBinar arbore;
    arbore.insereazaRandom(10, 1, 100);
    arbore.parcurgerePreOrdine();
    arbore.parcurgereInOrdine();
    arbore.parcurgerePostOrdine();
    arbore.parcurgerePeNivel();

    return 0;
}
