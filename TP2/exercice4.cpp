# include <iostream >
# include <algorithm>

using namespace std;

int nb_occ(char chaine[], char c[]){
int taille = sizeof(c)/sizeof(chaine[0]);
int compteur;
for (int k=0; k<taille; k++){
    if (chaine[k]==c[0]){compteur++;}
    }
return compteur;
}

main(){
char c1[]="je dooors";
char c2[]="o";
cout << nb_occ(c1,c2);
return 0;
}
