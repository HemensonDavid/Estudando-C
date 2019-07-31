#include <iostream>

using namespace std;
int main(){
	
	cout<< "Digite a nota 1: ";
	int nota1;
	cin>> nota1;
	
	cout<< "Digite a nota 2: ";
	int nota2;
	cin>> nota2;
	
	cout<< "Digite a nota 3: ";
	int nota3;
	cin>> nota3;
	
	cout<< "Digite a nota 4: ";
	int nota4;
	cin>> nota4;
	
	cout<< "Digite a nota 5: ";
	int nota5;
	cin>> nota5;
	
	int media;
	media= (nota1+nota2+nota3+nota4+nota5)/5;
	
	if(media >=60){
		
		cout<< "Voce foi Aprovado :)"<< endl;
	}else{
		cout<< "Voce Nao foi Aprovado :("<< endl;
	}
	
	
	return 0;
	
	
	
	
	
}
