# include <iostream >
# include <string>
# include <stdlib.h>

using namespace std;

float calculatrice(float n1, float n2, char c){
float res;
char error[]="Erreur : division par 0 non autorisee";

if (c=='+'){res = n1+n2;}
else if (c=='-'){res = n1-n2;}
else if (c=='*'){res = n1*n2;}
else if (c=='/'){res = n1/n2;}
return res;
}

main (){
float n1,n2;
cout << "Saisissez le 1er reel : ";
cin >> n1;
cout << "Saisissez le 2er reel : ";
cin >> n2;

cout << n1 << " + " << n2 << " = " << calculatrice(n1, n2, '+') << endl;
cout << n1 << " - " << n2 << " = " << calculatrice(n1, n2, '-') << endl;
cout << n1 << " * " << n2 << " = " << calculatrice(n1, n2, '*') << endl;
// if (n2==0){cout << "Erreur : division par 0 impossible" << endl;}
// else {cout << n1 << " / " << n2 << " = " << calculatrice(n1, n2, '/') << endl;}
cout << n1 << " / " << n2 << " = " << calculatrice(n1, n2, '/') << endl;
return 0;
}
