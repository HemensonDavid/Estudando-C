#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	char caractere;
	
	cout<<"Digite um caractere: ";
	cin>>caractere;
	
	if(isdigit(caractere)==1){
		cout<<"O caractere digitado eh um numero ! "<<endl;
	}
	else if(isupper(caractere)==1){
		cout<<"O caractere digitado eh uma letra maiuscula ! "<<endl;
	}else if(isupper(caractere)==0){
		cout<<"O caractere digitado eh uma letra minuscula ! "<<endl;
	}
	return 1;
	
}
