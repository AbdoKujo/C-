
#include "Voiture.h"
#include <iostream>

using namespace std;

int main() {
    // Cr�ation d'une voiture avec le constructeur par d�faut
    Voiture v1;
    v1.afficherInfo();

    // Cr�ation d'une voiture avec le constructeur avec param�tres
    Voiture v2("Toyota", "Corolla", 2020, 15000.0, 50.0);
    v2.afficherInfo();

    // Acc�l�rer la voiture
    v2.accelerer(20.0);

    // Freiner la voiture
    v2.freiner(30.0);

    // Faire avancer la voiture
    v2.avancer(100.0);

    // Afficher � nouveau les informations de la voiture
    v2.afficherInfo();

    return 0;
}
