#include <iostream>

using namespace std;
int isap(char x,int y){
	if(x=='m'|| x=='M'){
		return 65-y;
	}else{
		return 60-y;
	}
}

int main(){
	
	cout<<"Informe seu sexo: ";
	char s;
	cin>> s;
	
	cout<<"Informe sua idade: ";
	int idade;
	cin>> idade;
	
	cout<<"Falta "<<isap(s,idade)<<" Anos para se aposentar. "<<endl;
	
	return 0;
	//hemenson
}
