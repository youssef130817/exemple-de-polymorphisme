#include <iostream>
using namespace std;


#ifndef VEHICULES_HPP
#define VEHICULES_HPP

class vehicules
{
protected:
    string marque;
    int model;
    int vitesse;

public:
    vehicules(string marque = " ", int model = 0, int vitesse = 0);
    virtual void afficher() = 0;
};


#endif

