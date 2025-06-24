#include <iostream>

using namespace std;
	
/*
	STRUCT
		-> Estruturas que permitem armazenar dentro de sua definição metódos e variáveis que pidem ter seu valores definidos e chamados, desde que esse chamado
		venha a partir de um objeto do tipo criado através do struct
		
		-> Uma única definição pode ser usada para criar diferentes instâncias do objeto, permitindo que diferentes instâncias recebam diferentes valores em suas
		variáveis e funções mesmo que estas sejam definidas num mesmo bloco de código. Deste modo podemos dizer que os structs, são excelentes criar elementos que 
		devem ser repetidos diversas vezes dentro de um código
		
		SINTAXE:
			struct nome {variáveis e funções}
*/
struct Carro {
	string modelo;
	string cor;
	int ano;
	float velocidade_max;
};

int main(){
	// Exemplo de instância de struct, atribuição de valores para suas variáveis e  chamada dos valores
	Carro fusquinha;
	
	fusquinha.modelo = "Fusca";
	fusquinha.cor = "Azul";
	fusquinha.ano = 1945;
	fusquinha.velocidade_max = 160;
	
	cout << "O nome do carro: " << fusquinha.modelo;
	cout << "\nA cor do carro: " << fusquinha.cor;
	cout << "\nO ano do carro: " << fusquinha.ano;
	cout << "\nA velocidade máxima do carro: " << fusquinha.velocidade_max;
	
	cout << "\n\n";
	
	// Segundo exemplo demosntrando diferentes atibuições para diferentes instâncias
	Carro maverick;
	
	maverick.modelo = "Maverick";
	maverick.cor = "Preto fosco";
	maverick.ano = 1980;
	maverick.velocidade_max = 300;
	
	cout << "O nome do carro: " << maverick.modelo;
	cout << "\nA cor do carro: " << maverick.cor;
	cout << "\nO ano do carro: " << maverick.ano;
	cout << "\nA velocidade máxima do carro: " << maverick.velocidade_max;
	return 0;
}