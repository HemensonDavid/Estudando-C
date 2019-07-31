#include <iostream>

using namespace std;

int isvoto(int idade){
	if(idade<18){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	cout<<"digite sua idade: ";
	int idade;
	cin>> idade;
	
	if(isvoto(idade)==0){
		cout<<"Voce nao eh obrigado a votar ";
	}else{
		cout<<"Voce eh obrigado a votar ";
	}
	//hemenson
}
