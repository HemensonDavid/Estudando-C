#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	char caractere;
	
	cout<<"Digite um caractere: ";
	cin>>caractere;
	
	if(isdigit(caractere)==1){
		cout<<"O caractere digitado eh um numero! "<<endl;
	}
	return 1;
	
}

