#include <iostream>
using namespace std;

/*
	RECURSIVIDADE 
		-> Capacidade de funções de chamarem a sí mesmas
		-> Por mais que tecnicamente só seja preciso mencionar a função uma vez no código de sua Main, ela ainda é chamada multiplas vezes pelo seu programa
		-> Mantenha sua atenção em evitar que uma função recursiva seja presa em um loop de chamadas de sí memsma
*/

void contador(int iterador);
void fatorial(int n_fatorial, int resultado = 1);

int main(){
	int entrada;
	
	cout << "Digite um valor inteiro: ";
	cin >> entrada;
	
	contador(entrada);
	fatorial(entrada);
	return 0;
}

// Exemplo de função recursiva, (observe que existe um chamado dela, dentro dela mesma)
void contador(int iterador){
	cout << "\nValor atual: " << iterador;
	--iterador;
	if (iterador > 0){
		contador(iterador);
	}
}

// Outro exemplo
void fatorial(int n_fatorial, int resultado){
	if (n_fatorial > 1) {
		resultado *= n_fatorial;
		fatorial(--n_fatorial, resultado);
	}
	else {
		cout << "\n\nResultado do fatorial: " << resultado; 
	}
}
// Note que: essas funções funcionam sem loops


