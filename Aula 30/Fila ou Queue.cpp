#include <iostream>
#include <queue>

using namespace std;

/*
	FILAS/QUEUE
		-> Estrutura de dados semelhante as Stacks, capazes de armazenar diferentes valores
		usando uma lógica parecida com a filas comuns
		-> Os dados saem na ordem em que entram ou seja o oposto de uma Stack
*/

int main(){
	
	queue <string> cartas;
	
	cartas.push("OUROS");
	cartas.push("PAUS");
	cartas.push("ESPADAS");
	cartas.push("COPAS");
	
	cout <<  "Tamanho da fila: " << cartas.size();
	cout << "\n\nPrimeira carta: " << cartas.front();
	cout << "\nUltima carta: " << cartas.back();
	cout << "\n\n";
	
	while(!cartas.empty()){
		cout << "\nCarta atual: " << cartas.front();
		cartas.pop();
		cartas.empty() == true ? cout << ("\nA fila ficou vazia") : (cout << "\nA fila ainda tem objetos");
	}
	
	/*
	METÓDOS
		empty: retorna valor verdadeiro se a fila estiver vazia
		size: retorna o tamanho da fila
		front: retorna a carta na frente da fila, (não a remove)
		back: retorna a carta de trás da fila
		push: adiciona um elemnto na fila
		pop: remove a carta da frente da fila
	*/
}