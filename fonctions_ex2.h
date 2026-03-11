#ifndef FONCTIONSEX2_H
#define FONCTIONSEX2_H

#include <vector>
#include <string>

// Affiche le contenu du vecteur (référence constante pour l'efficacité) [cite: 32, 33]
void affiche(const std::vector<std::string>& v);

// Concatène les éléments avec un espace [cite: 34, 35]
std::string concatene(const std::vector<std::string>& v);

// Ajoute une virgule à chaque mot via for_each [cite: 36, 38]
void ajoute_virgule(std::vector<std::string>& v);

#endif