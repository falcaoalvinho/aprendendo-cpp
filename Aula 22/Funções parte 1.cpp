#include <iostream>
using namespace std;
/*
	FUNÇÕES
		-> Blocos de código que quando definidos para realizar um processo podem ser chamados multiplas vezes, evitando assim a necessidade de escrever um memso código 2 vezes em partes 
		diferentes de um projeto tornando seu código mais legível
		
		-> Capazes de retornar valores de todos os tipos, inclusive de não retornar valor nenhum
		
		-> Usam de valores chamados argumentos, que são inseridos nelas em seus chamados mesmo vindos de fora de seu escopo
		
		SINTAXE:
		
		tipo nome (argumentos){
		bloco de código executado pela função
		return retorno 
		}
		
		OBS: Use return apenas se a função tiver um tipo diferente de void
		OBS: Para usar uma função mesmo que essa tenha sido declarada num escopo qualquer, é necessário prototipa-la usando o código: tipo nome(argumentos);
*/

int soma(int a, int b); // Prototipação da função

int main(){
	int a, b, resultado;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	
	cout << "\nDigite o valor de B: ";
	cin >> b;
	
	resultado = soma(a, b); // Chamada da função (dentro de uma variável para armazenar o valor)
	
	cout << "\n\nResultado da soma A + B: " << resultado;
	
	return 0;
}

// Declaração da função
int soma(int a, int b){
	return (a + b);
}