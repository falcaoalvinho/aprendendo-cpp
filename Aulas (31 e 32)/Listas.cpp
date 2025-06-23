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
	list <string> nomes;
	list<string>::iterator it; // Permite controlar a posição aonde o objeto será alocado na lista
	string nome;
	
	// É possível iterar pelos objetos de uma lista sem indíces mencionando-os diretamente em um laço do tipo for
	for(int i = 0; i < 5; i++){
		cout << "Digite um nome: ";
		cin >> nome;
		nomes.push_front(nome);
	}
	
	cout << "\n\ninsert()";
	
	// Exemplo de inserção de dados usando iterator
	it = nomes.begin();
	advance(it, 3);
	nomes.insert(it, "Bahianinho de Maua");
	
	nomes.reverse(); // Revertendo a ordem da lista (reverse())
	// sort(): ordena os valores de uma lista 
	
	for(string nome: nomes){
		cout << "\nNome: " << nome;
	}
	
	// Metódo erase(), permite deletar elementos de qualquer lugar da lista
	// OBS: ele deleta a posição que vier depois da mencionada
	nomes.erase(++it);
	cout << "\n\nerase()";	
	for(string nome: nomes){
		cout << "\nNome: " << nome;
	}
	
	//Metódo merge(), mescla duas listas em uma só
	list <string> nomes2;
	nomes2.push_front("Willian");
	nomes2.push_front("Xuxa");
	nomes2.push_front("Yasmin");
	nomes2.push_front("Zulu");
	
	nomes.merge(nomes2);
	
	cout << "\n\nmerge()";	
	for(string nome: nomes){
		cout << "\nNome: " << nome;
	}
	
	// Metódo clear(), limpa os dados da lista transformando ela numa lista vazia
	nomes.clear();
	cout << "\n\nTamanho da lista depois do clear(): " << nomes.size();	

	
	return 0;
}