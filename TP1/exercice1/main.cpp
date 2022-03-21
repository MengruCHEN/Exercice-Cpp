#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int val;
    float res;

    cout << "Entrer une valeur positive (0 pour terminer) : ";
    cin >> val;

    if(val<0){cout << "Erreur, la valeur ne peut pas etre negative.";}

    else{
        res = sqrt(val);
        cout << " La racine de " << val << " est " << res << endl;
    }

    return 0;
}
