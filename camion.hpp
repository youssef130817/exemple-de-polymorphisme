#include <iostream>
#include "vehicules.hpp"
using namespace std;
class camion : public vehicules
{
public:
    long int capacite_charge;
    float hauteur;
    camion(string marque = " ", int model = 0, int vitesse = 0, int capacite = 0, float hauteur = 0.0);
    void afficher();
};