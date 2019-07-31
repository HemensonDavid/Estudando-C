#include <iostream>

using namespace std;
int main(){
	
	cout << "Digite o ano: ";
	int ano;
	cin>> ano;
	
	if((ano%4==0)||(ano%100!=0)&&(ano%400==0)){
		cout<< "O Ano eh bissexto!"<< endl;
	}else{
		cout<< "O Ano nao eh bissexto!"<< endl;
	}
	
	system("pause");
	
	
	
	
	
}
