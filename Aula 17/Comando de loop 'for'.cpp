#include <iostream>
using namespace std;

int main(){
	/*
	COMANDO DE LOOP FOR
		-> Normalmente usado quando se tem conhecimento do número de vezes que o bloco 
		de coódigo contido nele deve ser executado
		
		-> Excelente para trabalhar com dados do tipo vetor
		
		-> Permite determinção de dos seus três parametros que definem seu comportamento
		
		SINTAXE 
			for(iniciação do iterador; condição de parada; incremento/decremento do iterador){código contido}
	*/
	
	int limite;
	cout << "Digite um limite para o número de iterações do laço for: ";
	cin >> limite;
	
	for(int i = 0; i < limite; i++){
		cout << "\nEssa é a " << (i + 1) << "ª iteração do loop";
		
	}
	
	return 0;
}