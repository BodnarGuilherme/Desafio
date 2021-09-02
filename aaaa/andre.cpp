#include <iostream>


int main () {
	
	float peso = 0;
	float caloriasMin, caloriasMax;
	int opcao = 0;
	
	std::cout << "Qual seu peso? \n";
	std::cin  >> peso;
	std::cout << "Escolha qual opcao deseja: emagrecer (1) ou manter peso (2) ou engordar (3): \n";
	std::cin  >>opcao;
	

	if (opcao == 1){
		
		caloriasMin = peso * 20;
		caloriasMax = peso * 25;
		
		std::cout << "Calorias minimas: \n" << caloriasMin;
		std::cout << "\nCalorias maximas: \n" << caloriasMax;

	}
	else if (opcao == 2){
		
		caloriasMin = peso * 25;
		caloriasMax = peso * 30;
		
		std::cout << "Calorias minimas: \n" << caloriasMin;
		std::cout << "\nCalorias maximas: \n" << caloriasMax;
		
	}
	
		else if (opcao == 3){
		
		caloriasMin = peso * 30;
		caloriasMax = peso * 35;
		
		std::cout << "Calorias minimas: \n" << caloriasMin;
		std::cout << "\nCalorias maximas: \n" << caloriasMax;	
	}
}