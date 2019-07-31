#include <iostream>

using namespace std;
int main(){
	
	cout<< "Digite um numero: ";
	int numero;
	cin >> numero;
	
	if(numero % 2 ==0){
		cout<< "O numero mais seu triplo eh "<< (numero*numero*numero)<< endl;
	}else{
		cout << "O dobro do seu numero eh "<< numero*2 << endl;
	}
	
	system ("pause");	
	
	
	
	
	
	
	
}
