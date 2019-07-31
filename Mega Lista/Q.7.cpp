#include <iostream>
using namespace std;
int main(){
	cout<<"Digite o valor do carro: ";
	double valor;
	cin>>valor;
	double r;
	if(valor<=60000){
		r=0.57*valor;
		r=valor-r;
		cout<<"O Valor Real do carro eh: R$ "<<r<<endl;
	}else{
		r=0.5*valor;
		r=valor-r;
		cout<<"O Valor Real do carro eh: R$ "<<r<<endl;
	}
	system("pause");
}
