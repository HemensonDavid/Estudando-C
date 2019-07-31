#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	char caractere;
	
	cout<<"Digite um caractere: ";
	cin>>caractere;
	
	if(isupper(caractere)==1){
		cout<<"O caractere digitado eh uma letra maiuscula ! "<<endl;
	}
	return 1;
	
}
