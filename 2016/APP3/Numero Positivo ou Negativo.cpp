#include <iostream>

using namespace std;
int main(){
	
	int num=1;
	
	while(num!=0){
		
		cout<<"Digite um Numero: "<< endl;
		cin>> num;
		
		if(num>0){
			cout<<"Esse Numero eh Positivo! "<< endl;
		}else{
			cout<< "Esse Numero eh Negativo"<< endl;
		}
	}
}
