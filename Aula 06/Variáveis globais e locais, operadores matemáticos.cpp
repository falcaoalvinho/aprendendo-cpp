#include <iostream>
using namespace std;
// Escopo de Variáveis -> Refere-se ao contexto em que uma variável, função ou objeto é acessível e reconhecido dentro de um programa.

// Variáveis globoais -> Variáveis que podem ser usadas em todo o programa
	// EX:
		
		int x, y, z;
		
int main(){
	// Variáveis locais -> Variáveis contidas dentro de um escopo qualquer (não podem ser usadas fora dele)
		// EX:
		
			int a, b, c;
			
	// Operadores matemáticos -> permitem que sejam realizadas operações matemáticas (+, -, /, *, %)
	// Em C++, existe prioridade entre os operadores matemáticos, conforme o padrão da própria matemática
	
		//EX
			a = 10, b = 20, c = 30;
	
			cout << "A: " << a << "\nB: " << b << "\nC: " << c;
			cout << "\nA + B: " << (a + b);
			cout << "\n(A + B) - C: " << ((a + b) - c); 
	
	return 0;
}