#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	while(num>=0){
		
		cout<< "Digite um numero: ";
		cin >> num;
		
		if(num<0){
			cout<<"Volte sempre !! "<< endl;
			system("pause");
		}
		else if (num%2==0){
			cout<<"O Triplo do seu numero eh: "<< num*3 << endl;
		}else{
			cout<<"O Dobro do seu numero eh: "<< num*2<< endl;
		}
	}
}
