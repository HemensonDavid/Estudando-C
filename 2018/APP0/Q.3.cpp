#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	cout<<"digite uma letra: ";
	char letra;
	cin>>letra;
	
	if(isdigit(letra)==0){
		if(isupper(letra)==1){
			cout<<"A letra digitada eh maiuscula.";
			return 0;
		}else{
			cout<<"A letra nao é maiuscula.";
			return 1;	
		}
	}else{
		cout<<"A letra digitada eh um numero.";
	}
}
