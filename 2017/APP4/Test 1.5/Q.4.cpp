#include <iostream>

using namespace std;

bool Isbuscar(int num[],int x,int qtd){
	for(int i=0;i<qtd;i++){
		if(x==num[i]){
			return true;
			break;
		}
	}
	return false;
}

int main(){
	int x=4;
	const int qtd=15;
	int num[qtd];
	
	for(int i=0;i<qtd;i++){
		num[qtd]=i;
	}
	
	if(Isbuscar(num,x,qtd)==true){
		cout<<"Seu numero x esta entre os numeros! ";
	}else{
		cout<<"Seu numero nao foi encontrado! ";
	}
	return 0;
}
