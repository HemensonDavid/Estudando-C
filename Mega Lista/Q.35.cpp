#include <iostream>
using namespace std;
int main(){
	
	int num;
	int aux=0;
	int x=1;
	cout<<"Digite um numero: ";
	cin>>num;
	do{
		aux=aux+x;
		x++;
	}while(x<=num);
	cout<<"A soma eh: "<<aux;
	return 0;
}
