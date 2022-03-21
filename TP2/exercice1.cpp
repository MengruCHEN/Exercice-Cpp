# include <iostream >

using namespace std;

void ajouter(int p, int & n){
    n = p;} // Je change le bonhomme qui habite dans n

main(){
int p,n;
cout << "Que vaut p ? ";
cin >> p;
cout << "Que vaut n ? ";
cin >> n;

ajouter(2*p,n);

cout << n << endl;
}
