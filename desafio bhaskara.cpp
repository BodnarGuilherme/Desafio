#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta, raiz1, raiz2;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            cout <<"Nao tem raizes reais\n";
        }
        else if (delta==0){
            raiz1=(-b)/(2*a);
            cout << "Possui apenas uma raiz real: "<<raiz1<< "\n";
        }else{
            raiz1=(-b - sqrt(delta))/(2*a);
            raiz2=(-b + sqrt(delta))/(2*a);
            cout << "Raiz 1: "<<raiz1 << "\n";
            cout << "Raiz 2: "<<raiz2<< "\n";
        }
    }else{
        cout <<"a=0, nao e uma equacao do segundo grau\n";
    }

}