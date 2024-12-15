#include "Point.h"
using namespace std;

int main() {
    Point p1(3.0f, 4.0f);
    Point p2(6.0f, 8.0f);
    cout << "Point 1: ";
    p1.affiche();
    cout << "Point 2: ";
    p2.affiche();
    cout << "Les points sont-ils identiques ? " << (Point::comparer(p1, p2) ? "Oui" : "Non") << endl;
    cout << "Distance entre les points: " << Point::distance(p1, p2) << endl;
    Point pMilieu = Point::milieu(p1, p2);
    cout << "Point milieu: ";
    pMilieu.affiche();

    return 0;
}
