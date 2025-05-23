#include <iostream>
using namespace std;

// Constantes e a diretiva 'define'
// Constantes -> espaços de memória onde armazenamos valores fixos.
	// Como usar
	
	#define pi 3.1415 // Usamos a diretiva define, seguido do nome da constate e seu valor.
	
	// Quando chamadas realizam uma permutação do nome para o valor definido.
	// Obs: o valor usado pode ser um comando como no exemplo abaixo.
	
	#define lindinha cout << "\n" <<"Você usou a constante lindinha!!!." << "\n";
	
int main(){
	// Declarações múltiplas de varáveis
	// Serve para tornar o código mais organizado.
		// Como fazer
		
		int variavel1, variavel2, variavel3; // Três variáveis em uma declaração.
		
			// ou
			
		int variavel4; int variavel5; int variavel6; // Três declarações separadas juntas.
		
		variavel1 = 100, variavel2 = 200,  variavel3 = 300; // Inicialização dessas variáveis de maneira múltipla.	
			
		lindinha // Chamada de uma constante
	return 0;
}