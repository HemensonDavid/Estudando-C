#include <iostream>

using namespace std;
int main(){
	
	int num1;
	int num2;
	
	while(num1+num2!=0){
		
		cout<< "Digite o primeiro numero: ";
		cin >> num1;
		
		cout << "Digite o Segundo numero: ";
		cin>> num2;
		
		if(num1==0 && num2==0){
			cout<< "Volte Sempre!! "<< endl;
			system("pause");
		}
		
		int r;
		r=num1+num2;
		
		if(r>20){
			cout<< "A Soma dos Dois numeros mais 8 eh: "<< r+8 << endl;		
		}else{
			cout <<"A Subtracao dos Dois numeros menos 5 eh: "<< r-5 << endl;	
		}
	
	}
}
