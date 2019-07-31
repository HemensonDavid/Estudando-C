#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	while(num>=1 || num<=7){
		cout<< "Digite um Numero de 1 a 7: ";
		cin >> num;
		
		if(num<1 || num>7){
			cout<< "Numero invalido"<<endl;
			return 1;
		}
		else if(num==1){
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
		}else{
			cout<< "Sabado"<< endl;
		}
	}
	
}
