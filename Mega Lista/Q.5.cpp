#include <iostream>
using namespace std;
int main(){
	int num1,num2,aux=0;
	
	cout<<"Digite o Numero 1: ";
	cin>>num1;
	for(int i=1;i<=2;i++){
		cout<<"Digite Mais Um Numero: ";
		cin>>num2;
		aux+=num2;
	}
	if(num1>aux){
		cout<<"O numero 1 foi maior que a soma dos outros numeros!";
		return 0;
	}else if(aux>num1){
		cout<<"A soma dos dois numeros é maior que o numero 1!";
		return 0;
	}else{
		cout<<"Os numeros sao iguais!";
		return 0;
	}
}
