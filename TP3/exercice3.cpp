# include <iostream >

using namespace std;

const int NMOIS = 12;

struct enreg {
    int stock;
    float prix;
    int ventes [NMOIS]; // nombre de vente par mois
};

void init (enreg &x){
x.stock = 0;
for (int i=0;i<NMOIS;i++){x.ventes[i]=0;}
}

main(){
enreg x;
init(x);
cout << "Stock : " << x.stock << endl;
x.ventes[8]+=7; // exemple pour une vente au mois de septembre
x.ventes[8]+=2;
for (int k=0;k<NMOIS;k++){
    cout << "Vente du mois n" << k+1 << " : " << x.ventes[k] << endl;}

return 0;}
