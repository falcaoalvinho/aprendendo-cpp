#include <iostream>
using namespace std;

int main(){
	/**
	ESTRUTURAS DE DECISÃO
		-> Permitem que de acordo com determinadas instruções o seu programa consiga tomar
		decisões básica
		
		SINTAXE: 
			if(condição){
				código caso condição retorne um valor verdadeira
			}
			else{
				código caso a condição retorne um valor falso
			}
	**/
	
	/**
	OPERADORES LÓGICOS
		-> Permitem realizar operações de returno True ou False em cima de operações lógicas
		EX: comparação (==), maior que (>), menor ou igual que (<=) etc	 
	**/
	
	int a, b;
	a = 5;
	
	cout <<"\nDigite um valor: ";
	cin >> b;
	
	if (a > b) {
		cout << "\nO valor 'a' é maior que o valor 'b'!";
	}
	else{
		if(b > a){
			cout << "\nO valor 'b' é maior que o valor 'a'!";
		}
		else{
			cout << "\nOs valores são iguais!";
		}
	}
	
	return 0;
}