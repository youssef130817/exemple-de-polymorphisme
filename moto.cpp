#include <iostream>
#include "moto.hpp"
using namespace std;
moto::moto(string marque , int model, int vitesse , int nb_cylindres): vehicules(marque,model,vitesse)
{
    this->nb_cylindres = nb_cylindres;
}
void moto::afficher()
{
    cout << "le moto est de  : \nmarque : " << marque << endl
         << "model : " << model << endl
         << "vitesse : " << vitesse << endl
         << "nombre de cylindres : " << nb_cylindres << endl;
}