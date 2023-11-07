#include <iostream>
#include "voitures.hpp"
using namespace std;
voiture::voiture(string marque, int model, int vitesse , int nbplaces , bool electric ) : vehicules(marque, model, vitesse)
{
    this->nb_places = nbplaces;
    this->est_electrique = electric;
}
void voiture::afficher()
{
    cout << "la voiture est de  : \nmarque : " << marque << endl
         << "model : " << model << endl
         << "vitesse : " << vitesse << endl
         << "nombre de places : " << nb_places << endl
         << "est electrique : ";
    if (est_electrique)
        cout
            << "oui" << endl;
    else
        cout << "non" << endl;
}