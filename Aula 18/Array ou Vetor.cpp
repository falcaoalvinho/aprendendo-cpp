#include <iostream>
using namespace std;

int main(){
	/*
	ARRAY OU VETORES (UNIDIRECIONAIS
		-> Estruturas de dados que permitem armazenar diferentes valores em uma única variável,
		esses valores podem ser acessados através de um sistema de indices que começa em 0
	
		SINTAXE
			tipo nome[tamanho]; EXEMPLO int vertor[10];
			
	*/
	int a;
	char letra;
	
	cout << "QUAL O TAMANHO DA PALAVRA: ";
	cin >> a;
	
	char letras[a];
	
	for(int i = 0; i < a; i++){
		cout << "\nDIGITE UMA LETRA: ";
		cin >> letra;
		letras[i] = letra;	
	}
	
	for(int i = 0; i < a; i++){
		cout << letras[i];	
	}
	
	return 0;
}