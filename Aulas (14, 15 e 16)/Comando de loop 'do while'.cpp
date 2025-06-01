#include <iostream>
using namespace std;

int main (){
	/*
	COMANDO DE LOOP DO WHILE
		-> Diferentemente do padrão 'while', os comandos 'do while', realizam pelo menos uma
		execução do bloco de código contido dentro de sí, na teoria é como se o código considera-se
		o primeiro teste condicional como verdadeiro, permitindo que loop seja iterado ao menos uma vez
		
		SINTAXE
			do{
				condição
			}while(condicao);
	*/
	
	int limite = 0;
	
	//Obs: mesmo a condição do while sendo falsa, o código ainda gera 1 impressão em tela
	do{
		cout << "Hello World <3!!!";
	}while(limite > 1);
	
	return 0;
}
