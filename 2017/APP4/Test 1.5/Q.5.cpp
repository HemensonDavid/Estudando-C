#include <iostream>
using namespace std;

int media(int notas[],int n_notas){
	int aux=0;
	for(int i=0;i<n_notas;i++){
		aux+=notas[i];
	}
	return aux/n_notas;
}

int acima(int notas[],int n_notas){
	int aux=0;
	for(int i=0;i<n_notas;i++){
		if(notas[i]>=70){
			aux++;
		}
	}
	return aux;
}
int abaixo(int notas[],int n_notas){
	int aux=0;
	for(int i=0;i<n_notas;i++){
		if(notas[i]<=50){
			aux++;
		}
	}
	return aux;
}

int entre(int notas[],int n_notas){
	int aux=0;
	for(int i=0;i<n_notas;i++){
		if(notas[i]>=50||notas[i]<=70){
			aux++;
		}
	}
	return aux;
}

int zerar(int notas[],int n_notas){
	int aux=0;
	for(int i=0;i<n_notas;i++){
		if(notas[i]==0){
			aux++;
		}
	}
	return aux;
}

int main(){
	int n_notas=15;
	int notas[n_notas];
	
	for(int i=0;i<n_notas;i++){
		notas[i]=70;
	}
	cout<<"Media: "<<media(notas,n_notas)<<endl;
	cout<<"Notas Acima de 70: "<<acima(notas,n_notas)<<endl;
	cout<<"Abaixo de 50: "<<abaixo(notas,n_notas)<<endl;
	cout<<"Entre 50 e 70: "<<entre(notas,n_notas)<<endl;
	cout<<"Zerou: "<<zerar(notas,n_notas)<<" Pessoas"<<endl;
	return 0;
}
