# include <iostream >

using namespace std;

struct complexe {
float re_part , im_part ;};

complexe somme(complexe c1, complexe c2){
    complexe c = {c1.re_part+c2.re_part, c1.im_part+c2.im_part};
    return c;}

// fonction somme elt tableau
complexe tab_somme(complexe tab[], int taille){
    complexe cc={0,0};
    for (int k=0;k<taille;k++){
        cc=somme(cc,tab[k]);}
    return cc;}

main(){
complexe tab_cpl[] = {{1,0},{3,1},{2,5}};
int taille = sizeof(tab_cpl)/sizeof(tab_cpl[0]);

complexe cpl = tab_somme(tab_cpl,taille);

cout << "La partie reelle est " << cpl.re_part << " la partie imaginaire est " << cpl.im_part << endl;

return 0;}
