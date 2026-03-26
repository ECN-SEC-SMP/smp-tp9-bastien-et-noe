#include <iostream>
#include <list>
#include <iterator> 
#include "fonctions_ex3.h"

int main() {
    // Créez une liste de huit entiers
    std::list<int> maListe = {10, 20, 30, 40, 50, 60, 70, 80};

    std::cout << "Liste initiale : ";
    affiche_liste(maListe);

    // Supprimez le troisième élément en utilisant des itérateurs
    std::list<int>::iterator it = maListe.begin();
    
    // On avance l'itérateur de 2 positions pour atteindre le 3ème élément
    std::advance(it, 2); 
    
    // Suppression effective
    maListe.erase(it);

    // Affichez à nouveau votre liste
    std::cout << "Liste apres suppression du 3eme element : ";
    affiche_liste(maListe);

    return 0;
}