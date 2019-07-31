#include <iostream>
#include <messin.h>

using namespace std;
int main(){
	int TAM=2;
	string vetor_nome[TAM];
	int vetor_int[TAM];
	string frase_int ="Digite um numero: ";
	string frase_nome ="Digite um nome: ";
	armazenar_nomes_e_inteiros_generico(vetor_int,vetor_nome,TAM,frase_int,frase_nome);
	imprimirMeuVetor(vetor_int,TAM);
}
