#include <iostream>

using namespace std;
int main(){
	
	cout << "digite seu salario:";
	int salario;
	cin >> salario;
	
	if(salario >= 2000){
		cout << "O seu salario mais 30% eh: "<< salario +(0.3*salario)<< endl;	
	}else{
		cout << "O seu salario mais 50% eh: "<< salario +(0.5*salario)<< endl;
	}
	
	system("pause");
	
	
	
	
	
}
