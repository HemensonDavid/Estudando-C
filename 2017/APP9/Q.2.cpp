#include <iostream>
#include <messin.h>
using namespace std;

struct numero_teste{
	int numero;
};

string positivoNegativo(numero_teste teste){
	if(teste.numero>=0){
		return "Positivo! ";
	}else{
		return "Negativo! ";
	}
}

int main(){
	numero_teste teste;
	cout<<"Digite um numero para ser verificado: ";
	cin>>teste.numero;
	positivoNegativo(teste);
	cout<<"Seu numero Digitado eh: "<<positivoNegativo(teste)<<endl;
	return 0;
}
