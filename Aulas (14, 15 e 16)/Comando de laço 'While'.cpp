#include <iostream>
using namespace std;

int main(){
	/*
	LOOPS OU LAÇOS
		-> Instruções que permitem que blocos de código sejam executados mais de uma vez
		desde que uma condição seja satisfeita ou não
	
	WHILE
		-> Normalmente usado quando não se tem conhecimento do número de vezes que o bloco 
		de código deve ser executado
		
		SINTAXE
			-> while(condição){bloco de código}
	*/
	
	int a, b = 0;
	 
	
	cout << "Digite quantas vezes o loop deve rodar: ";
	cin >> a;
	cout << "\n";
	
	while(b < a){
		++b;
		cout << "\nVolta atual: " << b;
	}
	
	return 0;
}