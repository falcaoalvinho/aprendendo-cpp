#include <iostream>
using namespace std;

int main(){
/**
INCREMENTO E DECREMENTO DE VARIÁVEIS
		-> Consiste numa técnica que encrementa ou decrementa o valor de uma variável
		muito usado em loops, sistemas de contagem e etc.
	
		-> Permite encrementos e decrementos de qualquer valor
**/
		// COMO USAR
			// Primeiro metódo -> funcional, mas feinho
				int a = 0;
				cout << "\nValor de 'a' antes do encremento: " << a;
				a = a + 1;
				cout << "\nValor de 'a' após encremento: " << a;
			
			//Segundo metódo -> funciona com outros operadores matemáticos (EX: a *= 2)
				int b = 0;
				cout << "\nValor de 'b' antes do encremento: " << b;
				b += 1;
				cout << "\nValor de 'b' após encremento: " << b;
			
			//Terceiro metódo -> mais simples, entretanto possuí menor controle do tamanho do encremento
				int c = 0;
				cout << "\nValor de 'c' antes do encremento: " << c;
				c ++;
				cout << "\nValor de 'c' após encremento: " << c;
				
		// DIFERENÇA DE PÓS E PRÉ-ENCREMENTO
			// PÓS -> O programa usa primeiro o valor da variável e depois o encrementa.
			// EX: (a++)
			
			// PRÉ -> O programa primeiro encrementa e depois usa o valor da variável.
			// EX: (++a)
	return 0;
}