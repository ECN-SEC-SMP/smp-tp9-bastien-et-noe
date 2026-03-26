#include "fonctions_ex3.h"
#include <iostream>

void affiche_liste(const std::list<int>& l) {
    for (const auto& n : l) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
}