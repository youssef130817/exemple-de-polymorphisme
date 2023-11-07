#include <iostream>
#include "camion.hpp"
using namespace std;
camion::camion(string marque, int model, int vitesse, int capacite, float hauteur) : vehicules(marque, model, vitesse)
{
    this->capacite_charge = capacite;
    this->hauteur = hauteur;
}
void camion::afficher()
{
    cout << "le camion est de  : \nmarque : " << marque << endl
         << "model : " << model << endl
         << "vitesse : " << vitesse << endl
         << "capacite de charge : " << capacite_charge << endl
         << "hauteur : " << hauteur << endl;
}