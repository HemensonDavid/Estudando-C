#include <iostream>

using namespace std;
int main(){
	
	cout<< "Informe o Raio do Circulo: ";
	double raioc;
	cin >> raioc;
	
	double areac;
	areac= 3.14 * (raioc*raioc);
	
	cout << "Informe a medida da base do retangulo: ";
	double base;
	cin >> base;
	
	cout << "Informe a medida da altura do retangulo: ";
	double altura;
	cin >> altura;
	
	double arear;
	arear=base*altura;
	
	if(areac>arear){
		cout<< "A area do circulo foi a maior area!"<< endl;
	}else{
		cout <<"A area do Retangulo foi a maior area!"<<endl;
	}
	
	system("pause");
	
	
	
}
