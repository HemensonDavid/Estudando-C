#include <iostream>
using namespace std;
int main(){
	cout<<"Digite um numero: ";
	int num;
	cin>>num;
	int aux;
	int x=20;
	
	while(num>=0 && num<=100){
		if(num==x){
			cout<<"\t\tParabens voce acertou o numero\n";
			break;
		}else if(num>x){
			aux=0;
			aux=num-x;
			cout<<"\t\tVoce passou "<<aux<<" Numero(s) do numero chave!!\n";
		}else{
			aux=0;
			aux=x-num;
			cout<<"\t\tVoce voltou "<<aux<<" Numero(s) do numero chave!!\n";
		}
		cout<<"Digite um numero: ";
		cin>>num;
	}
	return 0;
}
