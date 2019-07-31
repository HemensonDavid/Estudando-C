#include <iostream>
using namespace std;
int main(){
	double salario;
	double desconto1;
	double desconto2;
	
	cout<<"Digite seu salario: ";
	cin>>salario;
	desconto1=salario-(salario*0.13);
	desconto2=salario-(salario*0.22);
	if(salario<800.00){
		cout<<"Nao ah Desconto\n";
	}else if(salario>=800.00 && salario <=1600.00){
		cout<<"O Seu salario com desconto eh: "<<desconto1<<endl;
	}else{
		cout<<"O Seu salario com desconto eh: "<<desconto2<<endl;
	}
	return 0;
}
