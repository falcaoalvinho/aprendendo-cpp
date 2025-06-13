#include <iostream>
#include <list>

using namespace std;

/*
	SOBRECARGA DE FUNÇÕES
		-> Vem das fuções. Permite diferentes funções possuam o mesmo nome, tendo como diferença fundamental os tipos e a quantidade de argumentos
		-> Para usar basta definir a função e a sua sobrecarga (do mesmo jeito) e prototipar-las de uma só vez usando o nome que elas tem em comum
		
	OMISSÃO DE ARGUMENTOS DE UMA FUNÇÃO
		-> Permite que se realize uma chamada de uma função mesmo sem os argumentos necessários usando um valor padrão
*/

int soma(int a, int b);
int soma(list<int> a);

// Dentro da prototipação dessa função observe que temos um valor relacionado a um dos argumentos, esse valor será chamada e usado no lugar do argumento com o qual está associado
// a não ser que seja atribuido ao argumento outro valor dentro da chamada da função
void imprimir(string texto = "Valor padrão"); 

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
	
	cout << "\n\n";
	
	// Diferentes chamadas, sem omiisão e com omiisão
	imprimir("Valor definido na chamada");
	imprimir();
	
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


void imprimir(string texto){
	cout << texto << "\n";
}
