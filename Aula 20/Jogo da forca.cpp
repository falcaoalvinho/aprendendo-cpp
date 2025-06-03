#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <random>
using namespace std;

int main(){
	// Variáveis globais
	int tentativas = 6, letras_atuais = 0, letras_anteriores;
	char entrada_jogador;

	string palavras[5] = {"DINOSSAURO", "BANANA", "CAPOEIRA", "BORRACHA", "CELULAR"};
				
	string dicas[5] = {
		"Tipo de animal estinto",
		"Fruta popular", "Esporte brasileiro",
		"Mateiral escolar",
		"Aparelho eletrônico"
		};
	
	// Sorteio da palavra
	mt19937 engine(time(NULL));
	uniform_int_distribution<> sorteio(0, 4);
	int numero_sorteado = sorteio(engine);
	string palavra_sorteada = palavras[numero_sorteado];
	
	// Definição do visor 
	char visor[palavra_sorteada.size()];
	
	for (int i = 0; i < palavra_sorteada.size(); i++){
		visor[i] = '_';
	}
	
	
	while(0 < tentativas){ // Loop principal 
		
		// Computação acertos atuais e verificação de possiveis novos acertos
		letras_atuais = 0;
		for(int i = 0; i < palavra_sorteada.size(); i++){
			if (entrada_jogador == palavra_sorteada[i]){
				visor[i] = entrada_jogador;
			}	
			cout << " " << visor[i] << " ";
		
			if (visor[i] != '_'){
			letras_atuais++;
			}	
		}
		
		cout << "\nDICA: " << dicas[numero_sorteado]; // Exibição da dica
		
		// Entrada da jogada do jogador (já transforma de minúscula pra maiúscula)
		cout << "\nESCOLHA UMA LETRA DISPONIVEL: ";
		cin >> entrada_jogador;
		entrada_jogador = toupper(entrada_jogador); 
		
		// Verificação de acerto
		if (letras_atuais == letras_anteriores){
			tentativas--;
			}
		
		letras_anteriores = letras_atuais; // Atualização dos valores de acertos
		
		cout << "\n\nTENTATIVAS: " << tentativas << "\n\n"; // Exibição das tentativas
		
		system("cls"); // Comando para limpar o terminal		
	}
	return 0;
}