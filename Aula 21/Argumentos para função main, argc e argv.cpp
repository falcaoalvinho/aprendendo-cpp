#include <iostream>
#include <string.h>

using namespace std;

/*
	ARGUMENTOS PARA FUNÇÃO MAIN
		ARGC
			-> Valor inteiro
			-> Armazena quantidade de argumentos
			
		ARGV
			->Ponteiro aponta para matriz de caracteres
			->Permite que a partir de interações com o prompt dados sejam transmitidos ao programa
*/

int main(int argc, char *argv[]){
	
	if (argc > 1){
		if(!(strcmp(argv[1], "sol"))){
			cout << "Vou ao clube.\n\n";
		}
		else if(!(strcmp(argv[1], "nublado"))){
			cout << "Vou ao cinema.\n\n";
		}
		else{
			cout << "Vou ficar em casa.\n\n";
		}
	}
	
	return 0;
}