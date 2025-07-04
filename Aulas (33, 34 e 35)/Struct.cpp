#include <iostream>
using namespace std;
	
/*
	STRUCT
		-> Estruturas que permitem armazenar dentro de sua definição metódos e variáveis que podem ter seu valores definidos e chamados, desde que esse chamado
		venha a partir de um objeto do tipo criado através do struct
		
		-> Uma única definição pode ser usada para criar diferentes instâncias do objeto, permitindo que diferentes instâncias recebam diferentes valores em suas
		variáveis e funções mesmo que estas sejam definidas num mesmo bloco de código. Deste modo podemos dizer que os structs, são excelentes criar elementos que 
		devem ser repetidos diversas vezes dentro de um código
		
		SINTAXE:
			struct nome {variáveis e funções}
*/
struct Carro {
	// Variáveis
	string modelo;
	string cor;
	int ano;
	float velocidade;
	float velocidade_max;
	
	// Metódos do nosso struct
	//OBS: Os metódos de um struct não precisam ser prototipados!
	// Metódo construtor
	void novoCarro(string p_modelo, string p_cor, int p_ano, float p_velocidade_max){
		modelo = p_modelo;
		cor = p_cor;
		ano = p_ano;
		velocidade = 0;
		velocidade_max = p_velocidade_max;
	}
	
	// Metódo para exibir variáveis do carro
	void especificacoes(){
		cout << "\nO nome do carro.............: " << modelo;
		cout << "\nA cor do carro..............: " << cor;
		cout << "\nO ano do carro..............: " << ano;
		cout << "\nVelocidade do carro.........: " << velocidade;
		cout << "\nA velocidade máxima do carro: " << velocidade_max;
	}
	
	// Metodo para buzinar 
	void buzinar(){
		cout << "\n" << modelo << " acabou de buzinar";
	}
	
	// Metódo para acelerar o carro aumentando sua velocidade
	void acelerar(){
		float aceleracao;
		
		cout << "\nQuanto o carro deve acelerar: ";
		cin >> aceleracao;
		
		if ((aceleracao + velocidade) <= velocidade_max){
			velocidade += aceleracao;
			cout << "\n" << modelo << " acabou de acelerar para " << velocidade + aceleracao;
			
			if (velocidade < 0){
				velocidade = 0;
			}
		}
		else {
			velocidade = velocidade_max;
		}
	}
};

int main(){
	// Exemplo de instância de struct, atribuição de valores para suas variáveis e  chamada dos valores
	Carro fusquinha;
	
	fusquinha.modelo = "Fusca";
	fusquinha.cor = "Azul";
	fusquinha.ano = 1945;
	fusquinha.velocidade_max = 160;
	
	cout << "O nome do carro: " << fusquinha.modelo;
	cout << "\nA cor do carro: " << fusquinha.cor;
	cout << "\nO ano do carro: " << fusquinha.ano;
	cout << "\nA velocidade máxima do carro: " << fusquinha.velocidade_max;
	
	cout << "\n\n";
	
	// Segundo exemplo demosntrando diferentes atibuições para diferentes instâncias
	Carro maverick;
	
	maverick.modelo = "Maverick";
	maverick.cor = "Preto fosco";
	maverick.ano = 1980;
	maverick.velocidade_max = 300;
	
	cout << "O nome do carro...............: " << maverick.modelo;
	cout << "\nA cor do carro..............: " << maverick.cor;
	cout << "\nO ano do carro..............: " << maverick.ano;
	cout << "\nA velocidade máxima do carro: " << maverick.velocidade_max;
	
	cout<< "\n\n";
	
	// Exempos da aula 34
	// Usando metodos do struct
	Carro chevette;
	
	chevette.novoCarro("Chevrolet Chevette", "Verde", 1973, 220);
	chevette.especificacoes();
	
	cout << "\n\n";
	
	chevette.buzinar();
	chevette.acelerar();
	chevette.especificacoes();
	
	cout << "\n\n";
	
	// Usando Strcts em Arrays
	Carro *carros = new Carro[5]; // Obs: este é um ponteiro, veremos mais sobre na proxima aula
	
	Carro carro1, carro2, carro3, carro4, carro5;
	
	carros[0] = carro1;
	carros[1] = carro2;
	carros[2] = carro3;
	carros[3] = carro4;
	carros[4] = carro5;
	
	carros[0].novoCarro("Palio Weekend", "Cinza-cromo", 2009, 180);
	carros[1].novoCarro("Brasília", "Amarelo", 1985, 160);
	carros[2].novoCarro("Belinda", "Verde-musgo", 1995, 160);
	carros[3].novoCarro("Opala", "Azul-celeste", 1989, 220);
	carros[4].novoCarro("HB20", "Branco", 2022, 200);

	for(int i = 0; i < 5; ++i){
		carros[i].especificacoes();	
		cout << "\n\n";
	}
	
	return 0;
}