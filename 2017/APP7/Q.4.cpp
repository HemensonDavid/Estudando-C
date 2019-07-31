#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	char caractere;
	char result;
	
	cout<<"Digite um caractere: ";
	cin>>caractere;
	
	result=toupper(caractere);
	
	cout<<"O caractere digitado maiusculo eh: "<<result<<endl;
	return 1;
	
}
