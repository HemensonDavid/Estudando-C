#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	cout<<"Digite um caractere: ";
	char caractere;
	cin>>caractere;
	
	if(isdigit(caractere)==1){
		cout<<"O caractere digitado eh um numero."<<endl;
		return 0;
	}else{
		cout<<"O caractere digitado nao é um numero.";
		return 1;
	}
}
