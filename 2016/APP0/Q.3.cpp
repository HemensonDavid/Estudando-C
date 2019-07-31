#include <iostream>
using namespace std;
int main(){
	
	string login;
	int senha=1;
	
	while(senha!=0){
		cout<< "Informe seu login: ";
		cin>> login;
		
		cout<< "Informe sua senha: ";
		cin>> senha;
		
		if("login" == "Matrix" || senha == 123){
			cout<<"\t\tlogin Permitido\n\n";
			cout<<"\t\tBem Vindo a Matrix\n";
			cout<<"\t\t\aBoa Sorte\n";
			return 0;
		}else{
			cout<<"\t\tLogin Invalido\n";
		}	
	}
	return 0;
}
