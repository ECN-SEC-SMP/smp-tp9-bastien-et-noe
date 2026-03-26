#include <iostream>
#include <vector>
#include <algorithm> // Pour std::copy

int main() {
    // 1. Définition d'un vecteur d'entiers sans spécifier de taille 
    std::vector<int> monVecteur;

    // 2. Dimensionnement à une taille de 3 
    monVecteur.resize(3);

    // 3. Affectation de 3 valeurs [cite: 8]
    monVecteur[0] = 10;
    monVecteur[1] = 20;
    monVecteur[2] = 30;

    // 4. Parcours et affichage de 3 manières différentes [cite: 9]

    // a) Avec des indices [cite: 10]
    std::cout << "Affichage par indices : ";
    for (size_t i = 0; i < monVecteur.size(); ++i) {
        std::cout << monVecteur[i] << " ";
    }
    std::cout << std::endl;

    // b) Boucle sur une plage (C++11 range-based loop) [cite: 11, 12]
    std::cout << "Affichage par boucle sur plage : ";
    for (int valeur : monVecteur) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    // c) À l'aide d'un itérateur 
    std::cout << "Affichage par iterateur : ";
    for (std::vector<int>::iterator it = monVecteur.begin(); it != monVecteur.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // 5. Ajouter un nouvel élément en fin de vecteur et vérifier la taille 
    monVecteur.push_back(40);
    std::cout << "Nouvelle taille après push_back : " << monVecteur.size() << std::endl;

    // 6. Copier le vecteur dans d'autres vecteurs (copy et assign) 
    
    // Utilisation du constructeur par copie ou std::copy
    std::vector<int> vecteurCopie1;
    vecteurCopie1.assign(monVecteur.begin(), monVecteur.end()); // Utilisation de assign 

    std::vector<int> vecteurCopie2(monVecteur.size());
    std::copy(monVecteur.begin(), monVecteur.end(), vecteurCopie2.begin()); // Utilisation de copy 

    return 0;
}