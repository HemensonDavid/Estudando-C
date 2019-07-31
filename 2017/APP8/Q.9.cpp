#include <iostream>
#include <messin.h>
using namespace std;

void atualizacao_de_vetor(int vetor[],int tam,int valorAntigo,int valorNovo,int *sub){
	for(int i=0;i<tam;i++){
		if(vetor[i]==valorAntigo){
			vetor[i]=valorNovo;
			*sub=*sub+1;
		}
	}
}

int main(){
	int vetor[]={1,2,3,6,5,8};
	int TAM=5;
	int valorAntigo =3;
	int valorNovo =4;
	int sub=0;
	atualizacao_de_vetor(vetor,TAM,valorAntigo,valorNovo,&sub);
	imprimirMeuVetor(vetor,TAM);
	cout<<"Foram efeituada as trocas: "<<sub<<" Vezes"<<endl;
}
