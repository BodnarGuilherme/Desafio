#include<iostream>

using namespace std;

int main () {
    float ladoA;
    float ladoB;
    float areaA;
    float areaB;

    cout<<"Determine o valor do lado de um triangulo equilatero, triangulo A. \n";
    cin>> ladoA;
    cout<<"Determine o valor do lado de um triangulo equilatero, triangulo B. \n";
    cin>> ladoB;

    areaA = ladoA * 90 / 2;
    areaB = ladoB * 90 /2;

    if (areaA > areaB)
    {
        cout<<"A area do triangulo A, e a maior. \n";   
    }else{
        cout<<"A area do triangulo B, e a maior. \n";
    }
    system("Pause");
    return 0;    
}