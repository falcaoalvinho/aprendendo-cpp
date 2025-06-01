#include <iostream>
using namespace std;

int main(){
	/*
	COMANDO BREAK
		-> Dentro de laços, quebra o ciclo de execuções e permite que a próxima instrução
		do código seja realizada
	*/
	
	int a, b = 0;
	
	cout << "\nDigite contido em [0, 10] para que o código pare antes: ";
	cin >> a;
	
	while(b < 10){
		++b;
		cout << "\nO código rodou " << b << " vezes";
		
		if (b == a){
			cout << "\n\nO código encerrou operações antes da 10ª volta";
			break;
		}
	}
	
	return 0;
}