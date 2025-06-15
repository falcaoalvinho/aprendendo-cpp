#include <iostream>
using namespace std;

/*
	ENUM
		-> Estrura de dados que armazena uma lista de valores inteiros que podem ser acessados atravez de um ídice nominal
		-> Apresenta carater sequencial, (caso valores não sejam atribuidos, dara a cada um dos termos valores de sequência, EX: 0, 1, 2; 100, 101, 102)
		-> Importante para posteriormente aprendermos STRUCT
*/

int main(){
	
	//Exemplo de enum
	enum armas{pistola = 6, fuzil = 32, escopeta = 2};
	armas municoes;
	
	municoes = pistola;
	cout << "Balas da pistola: " << pistola;
	
	municoes = fuzil;
	cout << "\nBalas do fuzil: " << fuzil;
	
	municoes = escopeta;
	cout << "\nBalas da escopeta: " << escopeta;
	
	//Observe que diferentes valores foram relacionados a diferentes chaves, e que todos puderam ser chamadaos atravez de um objeto que partilhava o tipo criado pelo enum
	
		
	return 0;
}