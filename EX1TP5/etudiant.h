#include <string>
#include <vector>
using namespace std;
class Etudiant {
private:
    static int matricule;
    int id;
    string nom;
    int nbrNotes;
    vector<float> tabNotes;

public:
    Etudiant();
    Etudiant(const string& nom, int nb, const vector<float>& tab);
    Etudiant(const Etudiant& autre);
    ~Etudiant();

     // Getters
    int getId() const;
    std::string getNom() const;
    int getNbrNotes() const;
    const std::vector<float>& getTabNotes() const;

    // Setters
    void setNom(const std::string& nom);
    void setNbrNotes(int nb);
    void setTabNotes(const std::vector<float>& tab);

    void saisie();
    void affichage() const;
    float moyenne() const;
    bool admis() const;

    // M�thode statique
    static bool comparer(const Etudiant& x, const Etudiant& y);
};

