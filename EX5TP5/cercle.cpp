#include "cercle.h"
#include "../EX3TP5/point.cpp"
#include <cmath>

Cercle::Cercle(float rayon, const Point& centre) : rayon(rayon), centre(centre) {}
void Cercle::affiche() const {
    cout << "Cercle de rayon " << rayon << " et centre ";
    centre.affiche();
}
float Cercle::getRayon() const {
    return rayon;
}
void Cercle::setRayon(float r) {
    rayon = r;
}
Point Cercle::getCentre() const {
    return centre;
}
void Cercle::deplacerCentre(const Point& nouveauCentre) {
    centre = nouveauCentre;
}
float Cercle::surface() const {
    return M_PI*rayon*rayon;
}
float Cercle::perimetre() const {
    return 2*M_PI*rayon;
}
bool Cercle::egal(const Cercle& c) const {
    return rayon == c.rayon && comparer(centre, c.centre);
}
bool Cercle::appartient(const Point& p) const {
    return centre.distance(centre, p) <= rayon;
}
bool Cercle::comparer(const Point& p1, const Point& p2) const {
    return p1.getX()==p2.getX() && p1.getY()==p2.getY();
}
