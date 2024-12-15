#include "vecteur3d.h"
using namespace std;
int main() {
    Vecteur3D v1(3.0f, 4.0f, 5.0f);
    Vecteur3D v2(1.0f, 2.0f, 3.0f);
    cout << "V1: ";
    v1.afficher();
    cout << "V2: ";
    v2.afficher();
    Vecteur3D v3 = v1.somme(v2);
    cout << "V1 + V2: ";
    v3.afficher();
    cout << "Produit scalaire de V1 et V2: " << v1.produitScalaire(v2) << endl;
    cout << "V1 et V2 coincident? " << (v1.coincide(v2) ? "Oui" : "Non") << endl;
    cout << "Norme de V1: " << v1.norme() << endl;
    cout << "Norme de V2: " << v2.norme() << endl;
    Vecteur3D vMax = Vecteur3D::normax(v1, v2);
    cout << "Vecteur avec la plus grande norme (par valeur): ";
    vMax.afficher();
    Vecteur3D& vMaxRef = Vecteur3D::normaxRef(v1, v2);
    cout << "Vecteur avec la plus grande norme (par reference): ";
    vMaxRef.afficher();
    Vecteur3D* vMaxPtr = Vecteur3D::normaxPtr(&v1, &v2);
    cout << "Vecteur avec la plus grande norme (par adresse): ";
    vMaxPtr->afficher();

    return 0;
}
