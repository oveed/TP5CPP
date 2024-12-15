#include "etudiant.h"
#include <iostream>
#include <numeric>
using namespace std;
int Etudiant::matricule = 0;

Etudiant::Etudiant() : id(++matricule), nom(""), nbrNotes(0) {}

Etudiant::Etudiant(const string& nom, int nb, const vector<float>& tab)
    : id(++matricule), nom(nom), nbrNotes(nb), tabNotes(tab) {}

Etudiant::Etudiant(const Etudiant& autre)
    : id(++matricule), nom(autre.nom), nbrNotes(autre.nbrNotes), tabNotes(autre.tabNotes) {}

Etudiant::~Etudiant() {
    tabNotes.clear();
}

int Etudiant::getId() const {
    return id;
}

std::string Etudiant::getNom() const {
    return nom;
}

int Etudiant::getNbrNotes() const {
    return nbrNotes;
}

const std::vector<float>& Etudiant::getTabNotes() const {
    return tabNotes;
}

// Setters
void Etudiant::setNom(const std::string& nom) {
    this->nom = nom;
}

void Etudiant::setNbrNotes(int nb) {
    nbrNotes = nb;
    tabNotes.resize(nb);
}

void Etudiant::setTabNotes(const std::vector<float>& tab) {
    tabNotes = tab;
    nbrNotes = tab.size();
}



void Etudiant::saisie() {
    cout << "Entrez le nom de l'etudiant: ";
    cin >> nom;
    cout << "Entrez le nombre de notes: ";
    cin >> nbrNotes;
    tabNotes.resize(nbrNotes);
    for (int i = 0; i < nbrNotes; ++i) {
        cout << "Entrez la note no" << i+1 << ": ";
        cin >> tabNotes[i];
    }
}

void Etudiant::affichage() const {
    cout << "ID: " << id << "\nNom: " << nom << "\nNombre de Notes: " << nbrNotes << "\nNotes: ";
    for (float note : tabNotes) {
        cout << note << " ";
    }
    cout << "\nMoyenne: " << moyenne() << "\n";
    cout << (admis() ? "Admis\n" : "Non Admis\n");
}

float Etudiant::moyenne() const {
    if (nbrNotes == 0) return 0.0f;
    return accumulate(tabNotes.begin(), tabNotes.end(), 0.0f) / nbrNotes;
}

bool Etudiant::admis() const {
    return moyenne() >= 10.0f;
}

bool Etudiant::comparer(const Etudiant& x, const Etudiant& y) {
    return x.moyenne() == y.moyenne();
}
