#include <iostream>
using namespace std;

int mediaarray(int salarios[]){
	int aux=0;
	for(int i=0;i<5;i++){
		aux+=salarios[i];
	}
	return aux/5;
}
string Ismaior_salario(string nomes[],int salarios[]){
	int aux=0;
	string nome;
	for(int i=0;i<5;i++){
		if(aux<salarios[i]){
			aux=salarios[i];
			nome=nomes[i];
		}
	}
	return nome;
}

string Ismenor_salario(string nomes[],int salarios[]){
	int aux=0;
	string nome;
	for(int i=0;i<5;i++){
		if(aux==0){
			aux=salarios[i];
		}else if(aux>salarios[i]){
			aux=salarios[i];
			nome=nomes[i];
		}
	}
	return nome;
}


int ajuste1array(int salarios[]){
	
	int aux=0;
	for(int i=0;i<5;i++){
		if(aux<salarios[i]){
			aux=salarios[i];
		}
	}
	return aux-300;
}
int ajuste2array(int salarios[]){
	int aux2=0;
	for(int i=0;i<5;i++){
		if(aux2==0){
			aux2=salarios[i];
		}else if(salarios[i]<aux2){
			aux2=salarios[i];
		}
	}
	return aux2+300;
}
int main(){
	int salarios[5];
	string nomes[5];
	
	for(int i=0;i<5;i++){
		cout<<"Digite seu nome: ";
		cin>>nomes[i];
		cout<<"Digite seu salario: ";
		cin>> salarios[i];
	}
	
	cout<<"A Media salarial eh: "<<mediaarray(salarios)<<endl;
	cout<<"O maior salario foi de: "<<Ismaior_salario(nomes,salarios)<<endl;
	cout<<"O menor salario foi de: "<<Ismenor_salario(nomes,salarios)<<endl;
	cout<<"O valor do maior salario -300 reais eh: "<<ajuste1array(salarios)<<endl;
	cout<<"O menor salario +300 reais eh: "<<ajuste2array(salarios)<<endl;
	system("pause");
}
