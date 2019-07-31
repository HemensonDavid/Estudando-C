#include <iostream>
using namespace std;
int main(){
	int num,soma=0;
	
	for(int i=1;i<=20;i++){
		cout<<endl;
		cout<<"Digite um numero: ";
		cin>>num;
		if(num%2==1){
			soma+=num;
		}
	}
	cout<<"A soma dos numeros impares sao: "<<soma<<endl;
}
