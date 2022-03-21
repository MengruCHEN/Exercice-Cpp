# include <iostream >
# include <string>

using namespace std;

int n;
void compteur(void){n=n+1;}

main (){
    compteur();compteur();compteur();
cout<<"Appel de fonction numero " << n;
return 0;
}

