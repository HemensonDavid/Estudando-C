#include <iostream>
#include <messin.h>

using namespace std;
int main(){
	int TAM=5;
	int vetors[TAM];
	string frase="Digite um Numero: ";
	
	armazenar_inteiros_generico(vetors,TAM,frase);
	
	system("pause");
}
