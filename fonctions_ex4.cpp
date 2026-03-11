#include "fonctions_ex4.h"
#include <iostream>

void ajoute_evenement(Calendrier& cal, int date, std::string description) {
    cal[date].push_back(description);
}

void affiche_calendrier(const Calendrier& cal) {
    for (auto const& item : cal) {
        int date = item.first;                      // La clé est dans 'first'
        const std::list<std::string>& evenements = item.second; // La valeur est dans 'second'

        std::cout << date << " :" << std::endl;
        for (const std::string& ev : evenements) {
            std::cout << "  - " << ev << std::endl;
        }
    }
}