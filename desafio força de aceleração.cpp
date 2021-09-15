#include<iostream>

using namespace std;

int main () {
    int fr; //Força de aceleração 
    int m; //Massa do corpo
    int a; //Aceleração  

    cout<<"Entre um com um valor de forca de aceleracao: \n";
    cin>> fr;
    cout<<"Entre com um valor da massa do corpo: \n";
    cin>> m;
    // cout<<"Entre com o valor de aceleração: \n";
    // cin>> a;

    // fr = m * a;
    a = fr / m;

    cout<<a << "\n";

    system("Pause");
    return 0;
} 