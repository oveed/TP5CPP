#include "../EX3TP5/point.h"
using namespace std;

class Cercle {
private:
    float rayon;
    Point centre;

public:
    Cercle(float rayon = 1.0, const Point& centre = Point(0, 0));
    void affiche() const;
    float getRayon() const;
    void setRayon(float r);
    Point getCentre() const;
    void deplacerCentre(const Point& nouveauCentre);
    float surface() const;
    float perimetre() const;
    bool egal(const Cercle& c) const;
    bool appartient(const Point& p) const;
    bool comparer(const Point& p1, const Point& p2) const;

};

