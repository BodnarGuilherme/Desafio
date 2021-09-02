#include<iostream>



int main(){
	
std::string nome; 
float salario;



std::cout << "digite seu nome: ";
std::cin >> nome;

std::cout << "agora digite sua pretencao salarial: ";
std::cin >> salario;

if(salario <= 1299){
	std::cout << nome << "seu cargo será: aux producao";
}else if (salario >= 1300 && salario <= 2500){
	std::cout << nome << "seu cargo sera: Lider";
}else if (salario > 2501){
	std::cout << nome <<  "voce nao se encaixa no perfil da empresa.";
}

return 0;
}

