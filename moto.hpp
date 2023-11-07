#include <iostream>
#include "vehicules.hpp"
using namespace std;
class moto : public vehicules
{
public:
    int nb_cylindres;
    moto(string marque = " ", int model = 0, int vitesse = 0, int nb_cylindres = 0);

    void afficher();
};