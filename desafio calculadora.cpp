#include<iostream>
using namespace std;
int main(){
	float opcao = 0;
	float numero = 0;
	float numero2 = 0;
	float resultado = 0;

	cout << "Digite um numero: \n";
	cin >> numero;
	cout << "Digite outro numero: \n";
	cin >> numero2;
	cout << "Escolha entre uma dessas 4 funcoes: \n 1-Adicao \n 2-subtracao \n 3-Divisao \n 4-multiplicacao: ";
	cin >> opcao;
	if (opcao == 1){
		resultado =numero + numero2;
	}else if (opcao == 2){
		resultado =numero - numero2;
	}else if (opcao == 3){
		resultado = numero / numero2;
	}else if (opcao == 4){
		resultado =numero * numero2;	
	}
	if (resultado < 0){
		cout << "Resultado transformado em positivo = " << resultado * -1;
	}else{
		cout << resultado;
	}