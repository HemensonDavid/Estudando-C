#include <iostream>
using namespace std;
int main(){
	string nome[5];
	int cont_maria=0;
	
	for(int i=0;i<=4;i++){
		cout<<"Informe um nome: ";
		cin>>nome[i];
		if(nome[i]=="maria"||nome[i]=="Maria"){
			cont_maria++;
		}
		cout<<endl;
	}
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~Nomes Digitados~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	for(int i=0;i<=4;i++){
		cout<<nome[i];
		cout<<endl;
	}
	cout<<"Foram Digitados "<<cont_maria<<" Nomes Maria."<<endl;
	return 0;
}
