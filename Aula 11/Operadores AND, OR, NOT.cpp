#include <iostream>
using namespace std;

int main(){
	/**
	OPERADORES AND, OR E NOT
	
		AND -> '&&', retorna 'True' apenas caso todos os testes retornem 'True', senão retorna 'False'
			TABELA VERDADE AND
				True - True -> True
				True - False -> False
				False - True -> False
				False - False -> False
				
		OR -> '||', retorna 'True', se pelo meno um dos testes retornar 'True', inclusive se mais de um o fizer
			TABELA VERDADE OR
				True - True -> True
				True - False -> True
				False - True -> True
				False - False -> False
	
		NOT -> '!', inverte a lógica de outro operador fazendo com que retorne o oposto
	**/
	
	int a, b;
	bool c, continuar;
	
	inicio:
		
	cout << "Digite um valor (inteiro) para 'A': ";
	cin >> a;
	
	cout << "\nDigite um valor (inteiro) para 'B': ";
	cin >> b;
	
	cout << "\nDigite um valor (booleano) para 'C': ";
	cin >> c;
	
	if (a >= 5 && a <= 10){
		cout << "\n\nO valor de 'A', passou em um teste 'AND' onde 'A' >= 5 e 'A' <= 10 para 'A' = " << a;
		
	}
	else{
		cout << "\nO valor de 'A', não passou em um teste 'AND' onde 'A' >= 5 e 'A' <= 10 para 'A' = " << a;
	}
	
	if (b >= 100 || b <= 50){
		cout << "\nO valor de 'B', passou em um teste 'OR' onde 'B' >= 5 ou 'B' <= 10 para 'B' = " << b;
		
	}
	else{
		cout << "\nO valor de 'A', não passou em um teste 'OR' onde 'B' >= 100 ou 'B' <= 50 para 'B' = " << b;
	}
	
	cout << "\nO valor de 'C' após uma operação 'NOT' é: " << !c;
	
	cout << "\n\nDeseja testar outros valores (sim: 1): ";
	cin >> continuar;
	
	if (continuar){
		goto inicio;
	}
	
	
		
	
	
	return 0;
}