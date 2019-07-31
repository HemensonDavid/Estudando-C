#include <iostream>
using namespace std;
int main(){
	cout<<"Digite um nome: ";
	string nome_teclado;
	cin>>nome_teclado;
	
	cout<<"Digite um nome qualquer: ";
	string nome;
	cin>>nome;
	
	if(nome_teclado==nome){
		cout<<"Nome Correto!\n";
	}else{
		cout<<"Nome Incorreto!\n";
	}
	system("pause");
}
