# include <iostream >

using namespace std;
main (){

int h;
cout << "Hauteur de l'arbre : ";
cin >> h;

for(int k=1; k<=h; k++){
    for (int t=1; t<=h-k; t++){
        cout << "=";}
    for (int e=1; e<=2*k-1; e++){
        cout << "*";}
    for (int t=1; t<=h-k; t++){
        cout << "=";}
    cout << endl;

}

return 0;
}
