#include <iostream>

using namespace std;

int ismidade(int x){
	if(x>=18){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	int idade;
	cout<<"digite sua idade: ";
	cin>>idade;
	
	if(ismidade(idade)==0){
		cout<<"Voce eh maior de idade! ";
		return 0;
	}else{
		cout<<"Voce eh menor de idade! ";
	}
	return 1;
}
