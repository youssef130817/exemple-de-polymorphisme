#include <iostream>
#include "vehicules.hpp"
using namespace std;
vehicules::vehicules(string marque, int model, int vitesse)
{
    this->marque = marque;
    this->model = model;
    this->vitesse = vitesse;
}