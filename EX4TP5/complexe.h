#include <iostream>
using namespace std;

class Complexe {
private:
    double Re;
    double Img;

public:
    Complexe(double re = 0.0, double img = 0.0);
    void affiche() const;
    double module() const;
    Complexe conjugue() const;
    Complexe operator+(const Complexe &c) const;
    Complexe operator+(double d) const;
    Complexe operator-(const Complexe &c) const;
    Complexe operator*(const Complexe &c) const;
    friend Complexe operator+(double d, const Complexe &c);
    friend Complexe operator*(double d, const Complexe &c);
};
