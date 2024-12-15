#include "etudiant.h"
#include <iostream>
using namespace std;
int main() {
    Etudiant e1;
    Etudiant e2("Ali", 4, {12.5,15.0,10.0,4.0});
    e1.saisie();
    e1.affichage();
    e2.affichage();
   cout << "Resultat comparaison: "
     << (Etudiant::comparer(e1, e2) ? "Identiques" : "Differents") << endl;

    return 0;
}
