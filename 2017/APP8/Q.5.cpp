#include <iostream>
#include <messin.h>

using namespace std;
int main(){
	int TAM=5;
	string vetor_nomes[TAM];
	string frase2="Digite um Nome: ";

	armazenar_nomes_generico(vetor_nomes,TAM,frase2);
	
	system("pause");
}
