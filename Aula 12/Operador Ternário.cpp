#include <iostream>
using namespace std;

int main(){
	/**
	OPERADOR TERNÁRIO
		-> Uma alternativa as estruturas de decisão do tipo 'IF' condicional, que tende a ser mais rápida em
		operações mais simples retornando apenas 'True' ou 'False'
		
		SINTAXE
			(expressão) ?	valor 'True' : valor 'False'		
	**/
	
	float nota1, nota2, nota3, media;
	string situacao;
	
	cout << "Nota 1: ";
	cin >> nota1;
	
	cout << "Nota 2: ";
	cin >> nota2;
	
	cout << "Nota 3: ";
	cin >> nota3;
	
	media = (nota1 + nota2 + nota3) / 3;
	
	situacao = (media >= 5) ? "Aprovado" : "Reprovado";
	
	cout << "\nO aluno foi " << situacao;
	
	return 0;
}