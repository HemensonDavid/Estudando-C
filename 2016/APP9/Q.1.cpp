#include <iostream>
using namespace std;
int main(){
	int num[10];
	int maior=10;
	for(int i=0;i<=9;i++){
		cout<<"Digite um Numero: ";
		cin>>num[i];
	}
	cout<<"\t\tNumeros Digitados Maior ou igual a "<<maior<<endl;
	for(int i=0;i<=9;i++){
		if(num[i]>=maior){
			cout<<num[i]<<endl;
		}
	}
	return 0;
}
