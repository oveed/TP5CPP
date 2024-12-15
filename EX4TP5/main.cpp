#include "complexe.h"

int main() {
    Complexe c1(3,2), c2(-1,0), c3;
    cout << "c1: ";
    c1.affiche();
    cout << "c2: ";
    c2.affiche();
    c3 = c1 + c2;
    cout << "c1+c2: ";
    c3.affiche();
    c3 = c1 * c2;
    cout << "c1*c2: ";
    c3.affiche();
    c3 = c1 + 5;
    cout << "c1+5: ";
    c3.affiche();
    c3 = 2 * c2;
    cout << "2*c2: ";
    c3.affiche();
    cout << "Module de c1: " << c1.module() << endl;
    cout << "Conjugue de c1: ";
    c1.conjugue().affiche();

    return 0;
}
