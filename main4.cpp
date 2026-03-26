#include <iostream>
#include "fonctions_ex4.h"

int main() {
    Calendrier monHistoire;

    // Ajout de quelques dates
    ajoute_evenement(monHistoire, -753, "Fondation de Rome");
    ajoute_evenement(monHistoire, 476, "Chute de l'Empire romain d'occident");
    
    // Test de deux événements la même année (an 64)
    ajoute_evenement(monHistoire, 64, "Incendie de Rome");
    ajoute_evenement(monHistoire, 64, "Debut des persecutions contre les chretiens");

    // Affichage
    std::cout << "--- CHRONOLOGIE HISTORIQUE ---" << std::endl;
    affiche_calendrier(monHistoire);

    return 0;
}