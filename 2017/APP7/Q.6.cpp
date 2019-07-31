#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	string caracteres;
	
	cout<<"Digite seu nome: ";
	cin>>caracteres;
	
	for(int i=0;i<3;i++){
		caracteres[i]='X';
	}
	cout<<"Seu novo nome eh: "<<caracteres<<endl;
}
