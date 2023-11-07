#include <iostream>
#include "vehicules.hpp"
using namespace std;
class voiture : public vehicules
{

public:
    int nb_places;
    bool est_electrique;
    voiture(string marque = " ", int model = 0, int vitesse = 0, int nbplaces = 0, bool electric = false);

    void afficher();
};