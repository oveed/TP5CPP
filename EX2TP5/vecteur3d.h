#include <iostream>
#include <cmath>

class Vecteur3D {
private:
    float x,y,z;

public:
    Vecteur3D(float x=0, float y=0, float z=0);
    void afficher() const;
    Vecteur3D somme(const Vecteur3D& v) const;
    float produitScalaire(const Vecteur3D& v) const;
    bool coincide(const Vecteur3D& v) const;
    float norme() const;
    static Vecteur3D normax(const Vecteur3D& v1, const Vecteur3D& v2);
    static Vecteur3D& normaxRef(Vecteur3D& v1, Vecteur3D& v2);
    static Vecteur3D* normaxPtr(Vecteur3D* v1, Vecteur3D* v2);
};


