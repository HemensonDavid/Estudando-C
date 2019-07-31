#include <iostream>

using namespace std;
int main(){
	
	cout<< "Informe sua idade: ";
	int idade;
	cin >> idade;
	
	if(idade >= 18){
		cout<< "Voce eh obrigado a votar!"<< endl;
	}else if(idade >=16){
		cout<< "Voce nao eh obrigado(a) a votar! "<< endl;
	}else{
		cout<<"Voce nao pode votar!"<< endl;
	}
	
	system("pause");
	
}
