#include <iostream>
using namespace std;

int main(){
	/**
	SWITCH CASE
		-> Funciona de maneira semelhante ao comando 'If', e permite que o nosso código tome decisões,
		dados casos predefinidas
	
		-> Usado quanod se precisa de um sistema de decisão onde se conhece boa parte dos possíveis cenários
	
		-> Switch's podem ser aninhados um dentro de um dos cases do outro
	
		-> Você pode atribuir mais de um valor para um bloco de código mantendo os cases um em cima do
		outro com o bloco de código dentro do último
	
		SINTAXE
			switch(expressão){
			case caso1:
				comandos;
				break;
			...
			default;
				comandos;
		}
	**/
	
	int valor;
	
	cout << "Digite um valor (inteiro): ";
	cin >> valor;
	
	switch(valor){
		case 0:
			cout << "O valor digitado foi 1";
			break;
		case 1:
			cout << "O valor digitado foi 1";
			break;
		case 2:
			cout << "O valor digitado foi 2";
			break;
		case 3:
			cout << "O valor digitado foi 3";
			break;
		case 4:
			cout << "O valor digitado foi 4";
			break;
		case 5:
			cout << "O valor digitado foi 5";
			break;
		case 6:
			cout << "O valor digitado foi 6";
			break;
		case 7:
			cout << "O valor digitado foi 7";
			break;
		case 8:
			cout << "O valor digitado foi 8";
			break;
		case 9:
			cout << "O valor digitado foi 9";
			break;
		default:
			cout << "O valor digitado não está em [0, 9]";
	}
	return 0;
}
