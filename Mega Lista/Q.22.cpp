#include <iostream>
using namespace std;
int main(){
	cout<<"Digite um numero inteiro positivo: ";
	int num;
	cin>>num;
	
	if(num%1==0){
		cout<<"Esse numero eh um numero primo!!\n";
	}else{
		cout<<"Ele nao eh numero primo!!\n";
	}
	return 0;
}
