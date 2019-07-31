#include <iostream>

using namespace std;
int main(){
	
	double salario;
	double almento;
	
	while(salario>=0){
	cout<< "Digite seu salario: ";
	cin >> salario;
	
	if(salario<0){
		cout<< "Salario invalido"<< endl;
		system("pause");
	}
	else if(salario>=2000){
		almento=salario+(salario*0.3);
		cout<< "O seu novo salario eh: R$ "<< almento<<".00"<< endl;
		
	}else{
		almento=salario+(salario*0.5);
		cout<< "O seu novo salario eh: R$ "<< almento<<".00"<< endl;
		}
	}
}
