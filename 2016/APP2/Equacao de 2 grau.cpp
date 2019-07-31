#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	cout<< "Digite o valor de A: ";
	int valor_a;
	cin >> valor_a;
	
	if(valor_a == 0){
		cout << "A equacao nao eh de segundo grau!"<< endl;
		system ("pause");
	}
	cout << "Digite o valor de B: ";
	int valor_b;
	cin >> valor_b;
	
	cout << "Digite o valor de C: ";
	int valor_c;
	cin>> valor_c;
	
	double delta,raiz;
	delta = pow(valor_b,2) - (4*valor_a*valor_c);
	
	if(delta<0){
		cout<< "A equacao nao possui raizes reais! "<< endl;
		system("pause");
	}
	if(delta==0){
		cout<< "A equacao possui uma raiz";
		raiz = ((-1)*valor_b + sqrt(delta)/(2*valor_a));
		cout<< "A raiz da equacao eh "<< raiz <<endl;
		system("pause");
	}
	if(delta >0){
		cout<< "A equacao possui 2 raizes!"<< endl ;
		double raiz1,raiz2;
		raiz1 = ((-1)*valor_b + sqrt(delta))/(2*valor_a);
        raiz2 = ((-1)*valor_b - sqrt(delta))/(2*valor_a);
        cout<< "A raiz 1 da equacao eh: "<< raiz1<< endl;
        cout<< "A raiz 2 da equacao eh: "<< raiz2<< endl;
	}
	
	system("pause");
}
