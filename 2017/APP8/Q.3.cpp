#include <messin.h>
#include <iostream>
using namespace std;

int main(){
	int num1;
	int num2;
	int soma=0;
	int sub=0;
	int mult=0;
	
	cout<<"Digite um numero: ";
	cin>> num1;
	cout<<"Digite outro numero: ";
	cin>> num2;
	
	soma_subtracao_multiplicacao(num1,num2,&soma,&sub,&mult);
	cout<<"Sua soma: "<<soma<<endl;
	cout<<"Sua subtracao: "<<sub<<endl;
	cout<<"Sua multiplicacao: "<<mult<<endl;
}
