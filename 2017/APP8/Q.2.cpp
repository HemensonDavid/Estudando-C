#include <messin.h>
#include <iostream>
using namespace std;

int main(){
	const int TAM=5;
	int vetor[TAM];
	int num_maior=0;
	int num_menor=0;
	
	meuVetor(vetor,TAM);
	max_e_min(vetor,TAM,&num_maior,&num_menor);
	cout<<"O Maior Numero Foi: "<<num_maior<<endl;
	cout<<"O Menor Numero Foi: "<<num_menor<<endl;
	
	system("pause");
}
