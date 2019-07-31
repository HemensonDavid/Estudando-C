#include <iostream>
using namespace std;

string Ishello(int num){
	string vetor[5];
	vetor[0]="Ola Mundo! \n";
	vetor[1]="Hello world! \n";
	vetor[2]="Hola mundo! \n";
	vetor[3]="Bonjour tout le monde! \n";
	vetor[4]="sawubona emhlabeni! \n";
	string aux;
	for(int i=0;i<5;i++){
		if(i==num){
			aux=vetor[i];
		}
	}
	return aux;
}

int main(){
	int num;
	cout<<"Digite um numero: ";
	cin>>num;
	
	cout<<Ishello(num);
	system("pause");
}
