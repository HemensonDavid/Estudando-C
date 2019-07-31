#include <iostream>

using namespace std;
int main(){
	
	double salario;
	
	cout<<"Digite seu salario: ";
	cin>>salario;
	
	if(salario>=2000){
		salario+=(salario*0.3);
		cout<<"Seu novo salario eh: "<<salario<<endl;
	}else{
		salario+=(salario*0.5);
		cout<<"Seu novo salario eh: "<<salario<<endl;	
	}
}
