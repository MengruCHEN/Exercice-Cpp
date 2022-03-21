# include <iostream >

using namespace std;

int PGCD(int a, int b){
int temp;
while (b!=0){
    temp = b;
    b = a %b;
    a = temp;}
return a;}

main (){
int a, b, res;

cout << "Le premier entier : ";
cin >> a;
cout << "Le deuxieme entier : ";
cin >> b;

res = PGCD(a,b);

cout << "PGCD(" << a << "," << b << ")" << " = " << res << endl;

return 0;
}
