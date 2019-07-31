#include <iostream>

using namespace std;

int soma(int x,int y){
	int r=x+y;
	return r;
}

int main(){
	
	int num1,num2;
	
	cout<<"Digite um numero: ";
	cin>> num1;
	
	cout<<"Digite outro numero: ";
	cin>> num2;
	
	cout<<"O resultado da soma eh: "<<soma(num1,num2)<<endl;
	return 0;
	//hemenson
}
