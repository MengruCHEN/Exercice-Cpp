# include <iostream >
# include <algorithm>

using namespace std;

float find_max(float tableau[], int taille, float &tmax){
for (int k=0; k<=taille; k++){
    if (tableau[k]>tmax){tmax = tableau[k];};
}}
float find_min(float tableau[], int taille, float &tmin){
for (int k=0; k<=taille; k++){
    if (tableau[k]<tmin){tmin = tableau[k];};
}}

main(){

float t1[10]={-2,0,42,-3,-27,8072,89,2,62,2003};
float t2[10]={-2,0,42,1,-1,872,89,2,62,3};
int taille=sizeof(t1)/sizeof(t1[0]); // la taille du tableau
float t1max = t1[0];
find_max(t1,taille,t1max);
float t1min = t1[0];
find_min(t1,taille,t1min);

cout << "Le max du tableau t1 est " << t1max << endl;
cout << "Le min du tableau t1 est " << t1min << endl;

float t3[2*taille] = {};
for(int k=0; k<=taille; k++){t3[k]=t1[k];}
for(int k=taille; k<=2*taille-1; k++){
    if (t2[k-taille]>=0){t3[k]=t2[k-taille];}}

for(int k=0; k<=(2*taille-1); k++){cout << t3[k] << endl;} //pour tester si le nouveau tableau est bon

return 0;
}
