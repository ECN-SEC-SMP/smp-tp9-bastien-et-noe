#include "fonctions_ex2.h"
#include <iostream>
#include <algorithm> // Pour for_each [cite: 38]

void affiche(const std::vector<std::string>& v) {
    for (const auto& mot : v) {
        std::cout << mot << " ";
    }
    std::cout << std::endl;
}

std::string concatene(const std::vector<std::string>& v) {
    std::string resultat = "";
    for (const auto& mot : v) {
        resultat += mot + " ";
    }
    return resultat;
}

void ajoute_virgule(std::vector<std::string>& v) {
    // Utilisation de for_each avec une expression lambda [cite: 38]
    std::for_each(v.begin(), v.end(), [](std::string& s) {
        s += ",";
    });
}