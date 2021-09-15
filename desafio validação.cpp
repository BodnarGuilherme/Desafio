#include<iostream>

int main(){

	int numero = 0;

	std::cout << "digite um numero: ";
	std::cin >> numero;
	if (numero > 1 && numero <= 10){

		std::cout << "numero valido!"; 
	}else {
		std::cout << "numero incorreto!";
	}

	return 0;
} 