#include <iostream>
#include "voitures.hpp"
#include "camion.hpp"
#include "moto.hpp"
using namespace std;

int main()
{
    vehicules *list[3];
    list[0] = new voiture("Renault", 2022, 230, 5);
    list[1] = new moto("kawazaki", 2023, 180, 4);
    list[2] = new camion("Renault", 2000, 180, 5, 2.5);
    list[0]->afficher();
    list[1]->afficher();
    list[2]->afficher();
    return 0;
}