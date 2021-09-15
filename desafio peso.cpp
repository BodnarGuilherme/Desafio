#include<iostream>

float salario = 0;

float calculo4(){

	return (5 * salario) / 100;
}
float calculo3(){

	return (4.5 * salario) / 100;
}
float calculo2(){

	return (3 * salario) / 100;
}
float calculo1(){

	return (2 * salario) / 100;
} 

int main(){

	std::cout << "Digite o valor do seu salario para calcular o imposto a ser pago: ";
	std:: cin >> salario;

	if (salario < 1900){
		std::cout << "isento";
	}else if(salario >= 1900 && salario <= 2499) {
		std::cout << "seu imposto será: " << calculo1();
	}else if ( salario >= 2500 && salario <= 3699){
		std::cout << "seu imposto será: " << calculo2();
	}else if (salario >= 3700 && salario <= 4999){
		std::cout << "seu imposto será: " << calculo3();
	}else {
		std::cout << "seu imposto será: " << calculo4();
	}

} 