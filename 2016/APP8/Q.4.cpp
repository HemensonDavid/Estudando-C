#include <iostream>
using namespace std;
int main(){
	string nome[5];
	int cont_maria=0;
	char sexo[5];
	int cont_masc=0,cont_femin=0;
	
	for(int i=0;i<=4;i++){
		
		cout<<"Informe Seu Sexo (M/F): ";
		cin>>sexo[i];
		
		cout<<"Informe um nome: ";
		cin>>nome[i];
		
		if(nome[i]=="maria"||nome[i]=="Maria"){
			cont_maria++;
		}
		if(sexo[i]=='m'|| sexo[i]=='M'){
			cont_masc++;
		}else{
			cont_femin++;
		}
		cout<<endl;
	}
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~Nomes Digitados~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	for(int i=0;i<=4;i++){
		cout<<nome[i];
		cout<<endl;
	}
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~Resultado Final~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Foram Digitados "<<cont_maria<<" Nomes Maria."<<endl;
	cout<<cont_masc<<" Pessoa(s) com sexo Masculino. \n";
	cout<<cont_femin<<" Pessoa(s) com sexo Feminino. \n";
	
	return 0;
}
