#include<iostream>
using namespace std;
int main(){
	int num;
	int aux=0;
	cout<<"Digite um numero: ";
	cin>>num;
	
	if(num>1){
		for(int i=1;i<=num;i++){
			aux+=1;
		}
	}else if(num<1){
		for(int i=num;i<=num;i++){
			aux+=1;
		}
	}else{
		cout<<"O numero digitado eh ingual a 1 portando nao a intervalo\n";
		return 1;
	}
	cout<<"A soma do intervalo eh: "<<aux<<endl;
}
