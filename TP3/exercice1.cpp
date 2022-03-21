# include <iostream >

using namespace std;

struct complexe {
float re_part , im_part ;};

// question a
complexe somme(complexe c1, complexe c2){
    complexe c = {c1.re_part+c2.re_part, c1.im_part+c2.im_part};
return c;}

// question b
void fonction(float re, complexe & c){
    c.re_part = c.re_part*re;
    c.im_part = c.im_part*re;}

main(){
// question a
complexe cc1 = {1,9};
complexe cc2 = {1,3};
complexe cc  = somme(cc1,cc2);
cout << "La partie reelle est " << cc.re_part << " la partie imaginaire est " << cc.im_part << endl;

// question b
fonction(10,cc);
cout << "La partie reelle est " << cc.re_part << " la partie imaginaire est " << cc.im_part << endl;

return 0;
}
