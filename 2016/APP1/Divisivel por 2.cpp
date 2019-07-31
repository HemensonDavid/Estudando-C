#include <iostream>

using namespace std;
int main(){
	
	cout<< "Informe um Numero: ";
	int numero;
	cin >> numero;
	
	if(numero % 2 ==0){
		cout<< "O numero eh divisivel por 2"<< endl;
	}else{
		cout<< "O numero nao eh divisivel por 2"<< endl;
	}
	
	system("pause");
}
