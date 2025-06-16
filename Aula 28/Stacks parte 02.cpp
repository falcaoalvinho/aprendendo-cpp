#include <iostream>
#include <stack>
using namespace std;

/*
	PILHAS ou STACKS
		-> Formato de dado que opera de maneira análoga a uma pilha de objetos quaisquer, Stacks tem apenas um caminho por onde dados entram e saem,
		de modo que o primeiro objeto a entrar deve ficar em baixo dos que forem inseridos em sequência. Seguindo essa mesma lógica para a saída dos elementos,
		aqueles que entraram por último sairão primeiro.
		
		-> Tamanhos dinâmicos
		
		-> Possuí alguns metódos diferentes dos  de outros tipos de dados
*/

int main(){
	// Exemplo de delcaração de stack
	stack <string> cartas;
	
	// Metódo .empty() retorna true se uma pilha está vazia e false se não
	if(cartas.empty()){
		cout << "Pilha vazia\n\n";
	}

	// Exemplo de inserção de dados na stack Cartas
	cartas.push("Ás de ESPADAS");
	cartas.push("Ás de COPAS");
	cartas.push("Ás de OUROS");
	cartas.push("Ás de PAUS");
	
	if(!(cartas.empty())){
		cout << "Pilha com cartas\n\n";
	}
	
	// O tamanho pode ser facilmente acessado mesmo sendo dinâmico usando o metódo .size()
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta do topo: " << cartas.top();
	
	//Exemplo de retirada de dados
	cartas.pop();
	
	// Seguindo a definição a última carta a entrar será a primeira a sair, no exemplo deve ser o 'Ás de PAUS'
	cout << "\n\nTamanho da pilha: " << cartas.size() << "\n";
	cout << "Carta do topo: " << cartas.top();
	
	// Exemplo de como esvaziar uma pilha usando loops
	while(!cartas.empty()){
		cartas.pop();
	}
	
	if(cartas.empty()){
		cout << "\n\nPilha vazia";
	}
	
	return 0;
}