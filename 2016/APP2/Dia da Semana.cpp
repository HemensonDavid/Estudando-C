#include <iostream>

using namespace std;
int main(){
	
	cout<< "Digite um Numero de 1 a 7: ";
	int num;
	cin >> num;
	
	if(num==1){
		cout<< "Domingo"<< endl;
	}else if(num==2){
		cout<< "Segunda Feira"<< endl;
	}else if(num==3){
		cout<< "Terca Feira"<< endl;
	}else if(num==4){
		cout<< "Quarta Feira"<< endl;
	}else if(num==5){
		cout<< "Quinta Feira"<< endl;
	}else if(num==6){
		cout<< "Sexta Feira"<< endl;
	}else if(num==7){
		cout<< "Sabado"<< endl;
	}else{
		cout<< "Numero Desconhecido"<< endl;
	}
	
	system("pause");
	
}
