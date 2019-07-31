#include <iostream>

using namespace std;
int main(){
	
	int num=0;
	int num2=0;
	
	while(num>=0){
		cout<<"Digite um numero: ";
		cin>> num;
		num2=0;//dps de repetir o numero do contador volta a ser 0;
		while(num>=0 && num2<=10){
			cout<<""<<num<<" x "<<""<<num2<<" = "<<num*num2<<endl;
			num2++;
		}
	}
	system("pause");
}
