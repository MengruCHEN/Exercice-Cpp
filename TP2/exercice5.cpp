# include <iostream >
# include <algorithm>

using namespace std;

main(){

// question i
int taille;
cout << "Taille du tableau : " ;
cin >> taille;

// question ii
int tbl[taille];
for (int i=0; i<taille; i++){
    cout << i+1 << "eme element du tableau : ";
    cin >> tbl[i];
}

// question iii
int tbl2[taille];
for (int i=0; i<taille; i++){
    tbl2[i]=tbl[i]*tbl[i];
}

// question iv
delete[] tbl;
for (int i=0; i<taille; i++){
    cout << tbl2[i] << " ";
}
delete[] tbl2;

return 0;
}
