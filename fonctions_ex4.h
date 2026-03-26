#ifndef FONCTIONS_EX4_H
#define FONCTIONS_EX4_H

#include <map>
#include <list>
#include <string>

// Définition de la structure demandée
typedef std::map<int, std::list<std::string>> Calendrier;

// Ajoute un événement à la map
void ajoute_evenement(Calendrier& cal, int date, std::string description);

// Affiche toutes les dates et leurs événements
void affiche_calendrier(const Calendrier& cal);

#endif