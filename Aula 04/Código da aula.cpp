#include <iostream>

using namespace std;

int main(){
	//Variáveis
		//Sintaxe:
			// TIPO NOME;
			// TIPO NOME = VALOR
		
		//Sobre
			// -> Criadas dentro da memória Ram
			// -> Armazenam dados de diferentes tipos
			// -> Precisam de nome
			// -> Precisam de um tipo de dado
			// -> Podem ser criada sem um valor inicial, sem valor padão
			// -> Caso você não inicialize uma variável pode ser que nela seja atribuído um valor aleatório
				
		//Tipos
			// 'int' : números inteiros
			// 'float' : números décimais
			// 'double' : números décimas com maior precisão
			// 'char' : caractéres, pode receber mais de 1 caracteres na forma de vetor 
			// 'string' : recebe um texto
			// 'bool' : recebe apenas valores booleanos (verdadeiro, falso)
			
		int inteiro;
		float decimal;
		double decimal2;
		char letra;
		char letras[3];
		string texto;
		bool verdadeiro;
		
		inteiro = 10;
		decimal = 3.141;
		decimal2 = 3.1415;
		letra = 'a';
		letras[0] = 'a';
		letras[1] = 'b';
		letras[2] = 'c';
		texto = "O vovô viu a uva.";
		verdadeiro = true;
		
		cout << "\nint: " << inteiro << endl;
		cout << "float: " << decimal << endl;
		cout << "double: " << decimal2 << endl;
		cout << "char: " << letra << endl;
		cout << "char[3]: " << letras[0] << ", " << letras[1] << ", " << letras[2] << endl;
		cout  << "string: " << texto << endl;
		cout << "bool: " << verdadeiro << endl;
		
	//Entrada e saída de dados via prompt
		// 'cout' : exibe na valores na tela (SINTAXE: 'cout << "exemplo";'
		
		// 'cin' : recebe valores, podendo armazená-los em variáveis (SINTAXE: 'cin >> exemplo;'
	
		cout << "Digite uma letra: ";
		cin >>	letra;
		cout << "A letra que você digitou foi: " << letra;
	
	return 0;
}