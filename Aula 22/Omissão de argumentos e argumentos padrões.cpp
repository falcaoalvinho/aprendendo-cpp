#include <iostream>
#include <list>

using namespace std;

/*
	Sobrecarga de Funções
		-> Vem das fuções. Permite diferentes funções possuam o mesmo nome, tendo como diferença fundamental os tipos e a quantidade de argumentos
		-> Para usar basta definir a função e a sua sobrecarga (do mesmo jeito) e prototipar-las de uma só vez usando o nome que elas tem em comum
*/

int soma(int a, int b);
int soma(list<int> a);

int main(){
	int valor_a, valor_b, valor_c;
	
	cout << "Digite um valor para A: ";
	cin >> valor_a;
	
	cout << "Digite um valor para B: ";
	cin >> valor_b;
	
	cout << "Digite um valor para C: ";
	cin >> valor_c;
	
	list<int> valores = {valor_a, valor_b, valor_c};
	
	// Diferentes chamadas, da função e sua sobrecarga
	cout << "\n\nSoma usando primeira definição: " << soma(valor_a, valor_b); 
	cout << "\nSoma usando primeira definição: " << soma(valores);
	
	return 0;
}

// Definição da função
int soma(int a, int b){
return (a + b);
}

// Sobrecarga dela
int soma(list<int> a){
	int resultado = 0;
	
	for(int n : a){
		resultado += n;
	}
	return resultado;
}

