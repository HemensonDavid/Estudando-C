#include <iostream>

int Ishomens(char sexo[], int pessoas){
	int aux;
	for(int i=0;i<pessoas;i++){
		if(sexo[i]=='m'||sexo[i]=='M'){
			aux++;
		}
	}
	return aux;
}
int Ismulheres(char sexo[], int pessoas){
	int aux;
	for(int i=0;i<pessoas;i++){
		if(sexo[i]=='f'||sexo[i]=='F'){
			aux++;
		}
	}
	return aux;
}


using namespace std ;
int main(){
	
	int const pessoas =5;
	
	string nome[pessoas];
	char sexo[pessoas];
	
	for(int i=0;i<pessoas;i++){
		cout<<"Digite seu nome: ";
		cin>> nome[i];
		cout<<"Digite seu sexo: ";
		cin>> sexo[i];
	}
	
	int aux=0,aux2=0;
	for(int i=0;i<pessoas;i++){
		if(nome[i]=="aroldo"){
			aux++;
		}
	}
	for(int i=0;i<pessoas;i++){
		if(nome[i]=="guilhermina"){
			aux2++;
		}
	}
	
	cout<<"Foram encontrados: "<<Ishomens(sexo,pessoas)<<" Homem(ns)\n";
	cout<<"Foram encontrados: "<<Ismulheres(sexo,pessoas)<<" Mulher(es)\n";
	cout<<"Fotam encontrados: "<<aux<<" Pessoas com o nome Aroldo\n";
	cout<<"Fotam encontrados: "<<aux2<<" Pessoas com o nome Guilhermina\n";

}
