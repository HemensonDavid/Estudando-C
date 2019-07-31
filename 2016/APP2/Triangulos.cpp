#include <iostream>

using namespace std;
int main(){
	
	cout<< "Digite o Lado 1: ";
	double la;
	cin>> la;
	
	cout<< "Digite o Lado 2: ";
	double lb;
	cin>> lb;
	
	cout<< "Digite o Lado 3: ";
	double lc;
	cin>> lc;
	
	if((la==lb)&&(la==lc)&&(lb==lc)){
		cout<< "Seu Triangulo eh equilatero"<< endl; // todos lados iguais
	}else if((la==lb)&&(la==lc)||(lb==lc)){
		cout<< "Seu Triangulo eh isosceles"<< endl; // 2 lados iguais
	}else{
		cout<< "Seu Triangulo eh escaleno"<< endl; // todos lados diferentes
	}

	system("pause");
	
	
	
	
	
	
}
