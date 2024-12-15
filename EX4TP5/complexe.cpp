#include "complexe.h"
#include <cmath>

Complexe::Complexe(double re, double img) : Re(re), Img(img) {}

void Complexe::affiche() const {
    cout << Re << (Img >= 0 ? " + " : " - ") << abs(Img) << "i" << endl;
}

double Complexe::module() const {
    return sqrt(Re*Re + Img*Img);
}

Complexe Complexe::conjugue() const {
    return Complexe(Re, -Img);
}

Complexe Complexe::operator+(const Complexe &c) const {
    return Complexe(Re+c.Re, Img+c.Img);
}

Complexe Complexe::operator+(double d) const {
    return Complexe(Re + d, Img);
}

Complexe Complexe::operator-(const Complexe &c) const {
    return Complexe(Re-c.Re, Img-c.Img);
}

Complexe Complexe::operator*(const Complexe &c) const {
    return Complexe(Re*c.Re - Img*c.Img, Re*c.Img + Img*c.Re);
}

Complexe operator+(double d, const Complexe &c) {
    return Complexe(d+c.Re, c.Img);
}

Complexe operator*(double d, const Complexe &c) {
    return Complexe(d*c.Re, d*c.Img);
}
