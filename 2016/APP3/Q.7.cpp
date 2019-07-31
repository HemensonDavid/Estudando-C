#include <iostream>

using namespace std;
int main(){
	
	int idade,ano;
	
	while(ano<=2016){
	
		cout<< "informe seu ano de nacimento: ";
		cin >> ano;
		
		if(ano>2016){
			cout<<"O ano digitado e maior que o ano atual"<< endl;
			cout<< "volte Sempre !! "<< endl;
			return 1;
		}else{
			
			idade=2016-ano;
			
			if(idade>=18){
				cout<< "Voce eh obrigado a votar !! "<< endl;
			}else if(idade>=16 && idade <18){
				cout<<"voce nao eh obrigado a votar"<< endl;
			}else{
				cout<<"voce nao pode votar"<< endl;
			}
		}
	}
}
