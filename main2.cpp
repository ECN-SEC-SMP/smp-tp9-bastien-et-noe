#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include "fonctions_ex2.h"

int main() {
    // Déclaration du vecteur de strings
    std::vector<std::string> mots = {"Bonjour", "comment", "allez", "vous", "?"};

    // Affichage taille et capacité
    std::cout << "Taille : " << mots.size() << " | Capacite : " << mots.capacity() << std::endl;

    // Échange d'indices avec std::swap
    std::swap(mots[1], mots[3]);

    // Insertion
    mots.insert(mots.begin() + 1, "a tous");

    // Modification du dernier élément
    mots.back() = "???";

    std::cout << "Vecteur modifie : ";
    affiche(mots);

    // Tri alphabétique (STL)
    std::sort(mots.begin(), mots.end());
    std::cout << "Apres tri : ";
    affiche(mots);

    return 0;
}