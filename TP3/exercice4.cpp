# include <iostream >
# include <cstring>

using namespace std;

const int LMAX_NOM = 30;

struct date {
    int jour ;
    int mois ;
    int annee ;
};

struct personne {
    char *nom;
    date date_inscr;
};

// question a
void inscr_personne (personne &x){
    cout << "Le nom de l'inscrit ? ";
    // cin >> x.nom;

    // question b : allocation dynamique
    char *temp = new char[LMAX_NOM];
    cin >> temp;
    int length = strlen(temp); // nouvelle taille
	x.nom = new char[length];
    strncpy(x.nom, temp, length); // fait une copie de temp dans x.nom avec nouvelle taille
	delete [] temp;

    cout << "Le jour d'inscription ? ";
    cin >> x.date_inscr.jour;
    cout << "Le mois d'inscription ? ";
    cin >> x.date_inscr.mois;
    cout << "L'annee d'inscription ? ";
    cin >> x.date_inscr.annee;
}

main(){
personne a;
inscr_personne(a);

cout << a.nom << " est inscrit le " <<
    a.date_inscr.jour << "/" <<
    a.date_inscr.mois << "/" <<
    a.date_inscr.annee << endl;

return 0;
}
