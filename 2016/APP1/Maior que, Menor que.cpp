#include <iostream>

using namespace std;
int main(){
	
	cout << " Informe o Priemiro numero: ";
	int num1;
	cin >> num1;
	
	cout << "Informe o segundo numero: ";
	int num2;
	cin >> num2;
	
	int soma;
	soma= num1+num2;
	
	if(soma <= 20){
		cout << "O numero menos 5 eh: "<<soma -5<< endl;
		
	}else{
		cout << "O numero mais 8 eh: "<< soma +8<< endl;
	}
	
	system("pause");
	
	
	
	
	
	
	
	

}
