# include <iostream >

using namespace std;
main (){

int n,u0=0,u1=0,u2=1;
cout << "n-ieme valeur de la suite : ";
cin >> n;

if (n==0) {cout << u0 <<endl;}
else if (n==1) {cout << u1 <<endl;}
else if (n==2) {cout << u2 <<endl;}

else {
int u3;
for (int i=3; i<=n; i++){
    u3 = u0+u1+u2;
    u0 = u1;
    u1 = u2;
    u2 = u3;
}
cout << u3 <<endl;

}
return 0;
}
