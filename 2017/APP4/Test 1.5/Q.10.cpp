#include <iostream>
using namespace std;

int Ismaior(int num[]){
	int aux=0;
	for(int i=0;i<7;i++){
		if(aux<num[i]){
			aux=num[i];
		}
	}
	return aux;
}

int Isposicao(int num[]){
	int aux=0;
	int aux2=0;
	for(int i=0;i<7;i++){
		if(aux<num[i]){
			aux=num[i];
			aux2=i;
		}
	}
	return aux2;
}

int main(){
	int num[7];
	for(int i=0;i<7;i++){
		cout<<"Digite um numero: ";
		cin>>num[i];
	}
	cout<<Ismaior(num)<<" eh o maior numero,e se encontra na posicao "<<Isposicao(num)<<endl;
	system("pause");
}
