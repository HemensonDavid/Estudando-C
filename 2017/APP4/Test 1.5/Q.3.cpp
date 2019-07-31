#include <iostream>

using namespace std ;

int somaarray(int vetor[]){
	int aux=0;
	for(int i=0;i<10;i++){
		aux+=vetor[i];
	}
	return aux;
}

int main(){
	int n1[10];
	for(int i=0;i<10;i++){
		cout<<"Digite um numero: ";
		cin>>n1[i];
	}
	int aux=somaarray(n1);
	cout<<"sua soma eh: "<<aux<<endl;
	return 0;
}
