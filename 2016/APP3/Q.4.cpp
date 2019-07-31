#include <iostream>

using namespace std;
int main(){
	
	int num=1;
	int cont_par=0;
	int cont_impar=0;
	
	while(num!=0){
		
		cout<< "Digite um numero: "<< endl;
		cin>> num;
		
		if(num==0){
			cout<< "Foram Digitados "<< cont_par << " Numero(s) Par"<< endl;
			cout<< "Foram Digitados "<< cont_impar << " Numero(s) Impar"<< endl;
			system("pause");
		}else if(num%2==0){
			cont_par++;
		}else{
			cont_impar++;
		}
			
	}	
}
