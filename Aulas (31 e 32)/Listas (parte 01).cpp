#include <iostream>
#include <list>

using namespace std;
	
	/*
		LISTAS
			-> Estrutura de dados mas complexa, semlhante a queues e stacks, entretanto permite uso de uma gama maior de metódos
			-> Não tem ordem dos dados tão fortemente impactante
			-> Permite armazenamento de vários valores que podem ser chamados usando indices
			
			SINTAXE
				list <tipo> nome = [valor_a, valor_b]
	*/
	
int main(){
	
	/*
	
	*/
	
	list <string> nomes;
	list<string>::iterator it; // Permite controlar a posição aonde o objeto será alocado na lista
	string nome;
	
	// É possível iterar pelos objetos de uma lista sem indíces mencionando-os diretamente em um laço do tipo for
	for(int i = 0; i < 5; i++){
		cout << "Digite um nome: ";
		cin >> nome;
		nomes.push_front(nome);
	}
	
	cout << "\n\n";
	
	// Exemplo de inserção de dados usando iterator
	it = nomes.begin();
	advance(it, 3);
	nomes.insert(it, "Bahianinho de Maua");
	
	nomes.reverse(); // Revertendo a ordem da lista (reverse())
	// sort(): ordena os valores de uma lista 
	
	for(string nome: nomes){
		cout << "\nNome: " << nome;
	}
	
	return 0;
}