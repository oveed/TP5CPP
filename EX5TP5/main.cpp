#include "cercle.h"

int main() {
    Point p1(2, 3), p2(5, 5), p3(-3, -2);
    Cercle c1(3, p1), c2(4, p2);
    cout << "Cercle c1: ";
    c1.affiche();
    cout << "Perimetre de c1: " << c1.perimetre() << endl;
    cout << "Surface de c1: " << c1.surface() << endl;
    c1.setRayon(5);
    cout << "Cercle c1 apres modification du rayon: ";
    c1.affiche();
    c1.deplacerCentre(p3);
    cout << "Cercle c1 apres deplacement: ";
    c1.affiche();
    cout << "Le point (2, 4) appartient-il a c1? " << (c1.appartient(p1) ? "Oui" : "Non") << endl;
    cout << "Le point (5, 5) appartient-il a c1? " << (c1.appartient(p2) ? "Oui" : "Non") << endl;
    cout << "c1 est-il egal a c2? " << (c1.egal(c2) ? "Oui" : "Non") << endl;
    return 0;
}
