# include <iostream >

using namespace std;

void calcule_somme(float tableau[], int taille, float & somme){
somme = 0;
for (int k=0; k<=taille; k++){
    somme += tableau[k];
}}

main(){
float t1[10]={-1,0,1,2,3,4,5,6,7,8};
int taille = sizeof(t1)/sizeof(t1[0]);
float somme;
calcule_somme(t1,taille,somme);
cout << "La somme des elements du tableau est " << somme << endl;

return 0;
}
