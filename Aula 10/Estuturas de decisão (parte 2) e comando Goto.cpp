#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	/**
	ESTRUTAS DE DECISÕES
		-> Aprofundamento nos conceitos vistos na aula anterior
	**/
	
	/**
	COMANDO 'goto'
	 	-> Através da criação de um label, permite que o ponteiro
		do programa volte para quele ponto onde este label foi instanciado
	**/
	
	int nota1, nota2, media, confirmacao;
	char conceito;
	string situacao;
	
	novoaluno:
	
	system("cls");
	
	cout << "Digite a primeira nota do aluno: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota do aluno: ";
	cin >> nota2;
	
	media = (nota1 + nota2) / 2;
	
	if (media < 4){
		conceito = 'F';
		situacao = "REPROVADO";
	}
	else {
		situacao = "APROVADO";
		if (media < 5){
			conceito = 'D';
		}
		else {
			if (media < 7){
				conceito = 'C';
			}
			else{
				if (media < 9){
					conceito = 'B';
				}
				else {
					conceito = 'A';
				}
			}
		}
	}
	
	cout << "\nO conceito final do aluno foi: " << conceito;
	cout << "\nO aluno foi: " << situacao;
	
	cout << "\nComputar mais um aluno? (SIM = 1): ";
	cin >> confirmacao;
	
	if (confirmacao) {
		goto novoaluno;
	}
	return 0;
}