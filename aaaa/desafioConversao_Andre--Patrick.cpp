#include <iostream>


int main () {
	
float polegadas = 10, metros = 30, pes = 15, jardas = 34, milhas = 11, centimetros = 90, quilometros = 60;
	
	
polegadas = metros * 39.37;
pes = metros * 3.281;
jardas = metros * 1.094;
milhas = metros / 1609;
centimetros = metros * 100;
quilometros = metros / 1000;
	

std::cout << "A conversao de metros para polegadas ficou: " << polegadas;
std::cout << "\n";	

std::cout << "A conversao de metros para pes ficou: " << pes;
std::cout << "\n";

std::cout << "A conversao de metros para jardas ficou: " << jardas;
std::cout << "\n";

std::cout << "A conversao de metros para milhas ficou: " << milhas;
std::cout << "\n";

std::cout << "A conversao de metros para centimetros ficou: " << centimetros;
std::cout << "\n";

std::cout << "A conversao de metros para quilometros ficou: " << quilometros;
std::cout << "\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
