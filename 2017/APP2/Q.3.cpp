#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	for(;;){
		
		cout<<"Digite um numero: ";
		cin>>num;
		
		num-=3;
		
		if(num%2==0){
			cout<<"O calculo retornou um numero par! Programa encerrado! "<<endl;
			return 0;
		}else{
			cout<<"O calculo retornou um numero impar! Tente novamente "<<endl;
		}
	}
	
}
