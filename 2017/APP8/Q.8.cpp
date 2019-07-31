#include <iostream>
#include <messin.h>
using namespace std;

void somar2Numeros(int x,int y,int *r1){
	*r1=x+y;
}

int main(){
	int x=10;
	int y=4;
	int resposta;
	
	somar2Numeros(x,y,&resposta);
	cout<<"O somatorio eh: "<<resposta<< endl;
	system("pause");
}
