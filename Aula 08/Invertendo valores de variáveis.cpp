#include <iostream>
using namespace std;

int main(){
	// INVERTENDO VALORES DE VARIÁVEIS
	int a = 10;
	
	cout << a << " -> Valor de 'a'\n";
	
	// Metódo tradicional (multiplicar por '-1')
	a *= -1;
	
	cout << a << " -> Valor de 'a' após uso do metódo tradicional\n";
	
	// Metódo com operador (-)
	cout << -a << " -> Valor oposto de 'a' (OBS: o valor da varável continua sendo o anterior, esse valor é temporário)\n";
		
	// Metódo simplificado com operador (=-)
	a =- a
	cout << a << " -> Valor de 'a' invertido pelo metódo simplificado"
	
	return 0;
}