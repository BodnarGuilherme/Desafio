#include<iostream>

using namespace std;

int main () {
    int fr; //For�a de acelera��o 
    int m; //Massa do corpo
    int a; //Acelera��o  

    cout<<"Entre um com um valor de forca de aceleracao: \n";
    cin>> fr;
    cout<<"Entre com um valor da massa do corpo: \n";
    cin>> m;
    // cout<<"Entre com o valor de acelera��o: \n";
    // cin>> a;

    // fr = m * a;
    a = fr / m;

    cout<<a << "\n";

    system("Pause");
    return 0;
} 