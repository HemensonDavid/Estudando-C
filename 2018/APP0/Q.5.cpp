#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	cout<<"digite uma letra: ";
	char letra;
	cin>>letra;
	
	if(!islower(letra)){
		char letra_modificada = tolower(letra);
		cout<<letra_modificada;
	}else{
		cout<<"A letra digitada ja esta em minusculo.";
	}
}
