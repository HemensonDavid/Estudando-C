#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	string nome;
	cout<<"Digite seu nome: ";
	cin>> nome;
	
	if(isupper(nome[0])){
		cout<<"Sua primeira letra do nome esta em maiusculo.";
	}else{
		cout<<"Sua primeira letra do nome esta em minusculo.";
	}
	return 0;
}
