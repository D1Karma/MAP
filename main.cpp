#include "BinaryTree.h"
#include <iostream>

int main() {
    ArboreBinar arbore;

    arbore.insereaza(10);
    arbore.insereaza(5);
    arbore.insereaza(15);
    arbore.insereaza(3);

    arbore.parcurgerePreOrdine();
    arbore.parcurgereInOrdine();
    arbore.parcurgerePostOrdine();

    return 0;
}
