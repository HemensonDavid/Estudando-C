#include <iostream>

using namespace std;
int isap(char x,int y){
	if(x=='m'|| x=='M'){
		return 0;
	}else{
		return 1;
	}
}

int main(){
	
	cout<<"Informe seu sexo: ";
	char s;
	cin>> s;
	
	cout<<"Informe sua idade: ";
	int idade;
	cin>> idade;
	
	if(isap(s,idade)==0){
		cout<<"voce se aposentara com 65 anos! "<<endl;
	}else{
		cout<<"voce se aposentara com 60 anos! "<<endl;
	}
	return 0;
	
}
