#include <iostream>
using namespace std;
int main(){
	int ano;
	cout<<"Infome um ano: ";
	cin>>ano;
	
	if(ano%400==0 || ano%4==0 && ano%100!=0){
		cout<<"Ano Bissexto "<<endl;
	}else{
		cout<<"O Ano nao eh bissexto!"<<endl;
	}
	system("pause");
}
