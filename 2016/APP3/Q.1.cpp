#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	for(num=1;num!=0;){
	
	cout<< "Digite um numero: ";
	cin >> num;
	
	if(num==0){
		cout<< "Volte Sempre !! "<< endl;
		system("pause");
	}
	if(num%2==0){
		cout<< "O Numero eh divisivel por 2"<< endl;
	}else{
		cout<< "O Numero nao eh divisivel por 2"<< endl;
	}
	
	

	
	}
	system("pause");
	
}
