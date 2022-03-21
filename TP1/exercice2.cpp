#include <iostream>

using namespace std;

int main()
{
    int n;
    float res=0;

    cout << "Entrer une valeur positive (0 pour terminer) : ";
    cin >> n;

    for (float k=1; k<=n; k++) {res+=1/k;}

    cout << "La somme des " << n << " premiers termes de la suite est " << res << endl;

    return 0;
}
