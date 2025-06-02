#include <iostream>
using namespace std;

int main(){
	/*
	ARRAY BIDIMENSIONAL / MATRIZ
		-> Pormato de dado de formato vetorial que possúi duas dimensões, (pode ser operado
		em linhas e colunas, na prática e semelhante a uma planilha)
		
		SINTAXE
		 tipo nome[quantidade linhas][quantidade colunas];
	*/
	
	int n_linhas, n_colunas;
	
	cout << "Digite o número de linhas: ";
	cin >> n_linhas;
	
	cout << "\nDigite o número de colunas: ";
	cin >> n_colunas;
	
	int quadro[n_linhas][n_colunas];
	
	
	for(int i = 0; i < n_linhas; i++){
		for(int j = 0; j < n_colunas; j++){
			if(i == 0 || i == (n_linhas - 1)){
				quadro[i][j] = 1;
			}
			else if(j == 0 || j == (n_colunas - 1)){
				quadro[i][j] = 1;
			}
			else{
				quadro[i][j] = 0;
			}
		}
	}

	cout << "\n";
	
	for(int i = 0; i < n_linhas; i++){
		for(int j = 0; j < n_colunas; j++){
			cout << quadro[i][j];
		}
	cout << "\n";
	}
	
	
	return 0;
}