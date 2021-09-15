#include<iostream>
using namespace std;

int main (){
	
	
    int numero = 0;
    int primeiro_divisivel = 0;
    int segundo_divisivel = 0;
    
    
    cout << "Digite o numero: ";
    cin >> numero;
    cout << "Digite o primeiro divisivel: ";
    cin >> primeiro_divisivel;
    cout << "Digite o segundo divisivel: ";
    cin >> segundo_divisivel;
    
    
    if(numero % primeiro_divisivel == 0 && numero % segundo_divisivel == 0){
        cout << "O numero " << numero << " e divisivel por: " << primeiro_divisivel << " e por " << segundo_divisivel;
    }else{
        cout << "Falha na operacao";
    }
}