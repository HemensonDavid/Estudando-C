#include <iostream>

using namespace std;
int main(){
	
	int idade=1;
	
	while(idade>0){
			
		cout<< "Digite sua idade: ";
		cin >> idade;
		
		if(idade<=0){
			cout<< "Volte sempre"<< endl;
			return 1;
		}
		else if(idade>=18 && idade <=70){
			cout<< "Voce eh obrigado a votar"<< endl;
		}else if(idade >= 16 && idade <18){
			cout<< "Voce nao eh obrigado a votar"<< endl;
		}else{
			cout<< "Voce nao pode votar"<< endl;
		}
	}
}
