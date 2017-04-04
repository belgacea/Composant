#pragma once
#ifndef Hacheur_h
#define Hacheur_h

#include <string>
#include "Bloc.h"

/**
* Prend en entrée une chaine de caractères
* Retourne le hash de la chaine de caractères en entrée en utilisant l'algorithme SHA-256 (256 bits en sortie) 
*/
std::string hash(std::string chaine);

/**
* Prend en entrée une chaine de caractères et un hash (chaine de caractères)
* Vérifie que le hash de la chaine correspond bien au hash en entrée
*/
std::bool checkHash(std::string chaine, std::string hash);

/**
* Prend en entrée un bloc
* Retourne une chaine de caractères contenant les données du bloc dans un format quelconque
*/
std::string blocToString(Bloc bloc);

#endif
