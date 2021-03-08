#include <iostream>
#include <string.h>
#include <iomanip>
#include <locale.h>

using namespace std;

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	char Resposta [10];
	int ContVingadores = 0, ContFrozen = 0, ContTitanic = 0;
	
	cout<<"Olá, seja bem vindo ao meu jogo :)\n";
	cout<<"é o seguinte, você ira escolher entre esses três filmes:\n";
	cout<<"Vingadores, Fronzen ou Titanic\n";
	cout<<"Escoheu né? Ótimo!...";
	cout<<"Agora irei lhe fazer algumas perguntas...";
	cout<<"e a partir das suas respostas, vou descobrir o filme que você esolheu... :p";
	cout<<"Vamos lá, Primeira pergunta:\n\n";
	
	cout<<"Lembre-se, responda com Sim ou Não\n\n\n";
	cout<<"----------------------------------------------\n\n";
	
	cout<<"1ª pergunta:\n\n";
	
	cout<<"É um filme de ação?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
    	ContVingadores++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"2ª pergunta:\n\n";
	
	cout<<"É um filme de animação?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
	    ContFrozen++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"3ª pergunta:\n\n";
	
	cout<<"É um filme de romance?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
    	ContTitanic++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"4ª pergunta:\n\n";
	
	cout<<"Tem Super Herois?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
	    ContVingadores++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"5ª pergunta:\n\n";
	
	cout<<"Tem muita neve e gelo?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
    	ContFrozen++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"6ª pergunta:\n\n";
	
	cout<<"A história se passa em um navio?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
	    ContTitanic++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"7ª pergunta:\n\n";
	
	cout<<"É da marvel?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
    	ContVingadores++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"8ª pergunta:\n\n";
	
	cout<<"É da Disney?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
	    ContFrozen++;
	}

	cout<<"----------------------------------------------\n\n";	
	cout<<"9ª pergunta:\n\n";
	
	cout<<"É inpirado em uma historia real?\n";
	cin>>Resposta;

	if (strcmp(Resposta,"SIM") == 0 || strcmp(Resposta,"sim") == 0 || strcmp(Resposta,"Sim") == 0){
    	ContTitanic++;
	}

	cout<<"\n\n";


	if(ContVingadores == 3){
	    cout<<"Seu filme escolhido foi: VINGADORES/n";
	}
	else if(ContFrozen == 3){
    	cout<<"Seu filme escolhido foi: FROZEN/n";
	}
	else {
	    cout<<"Seu filme escolhido foi: TITANIC/n";
	}
}
