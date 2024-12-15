#include "vecteur3d.h"
using namespace std;
Vecteur3D::Vecteur3D(float x,float y,float z) : x(x),y(y),z(z) {}

void Vecteur3D::afficher() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

Vecteur3D Vecteur3D::somme(const Vecteur3D& v) const {
    return Vecteur3D(x + v.x, y + v.y, z + v.z);
}

float Vecteur3D::produitScalaire(const Vecteur3D& v) const {
    return x * v.x + y * v.y + z * v.z;
}

bool Vecteur3D::coincide(const Vecteur3D& v) const {
    return (x==v.x && y==v.y && z==v.z);
}

float Vecteur3D::norme() const {
    return sqrt(x*x + y*y + z*z);
}

Vecteur3D Vecteur3D::normax(const Vecteur3D& v1, const Vecteur3D& v2) {
    return (v1.norme() > v2.norme()) ? v1 : v2;
}

Vecteur3D& Vecteur3D::normaxRef(Vecteur3D& v1, Vecteur3D& v2) {
    return (v1.norme() > v2.norme()) ? v1 : v2;
}

Vecteur3D* Vecteur3D::normaxPtr(Vecteur3D* v1, Vecteur3D* v2) {
    return (v1->norme() > v2->norme()) ? v1 : v2;
}
