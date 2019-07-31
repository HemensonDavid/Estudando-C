#include <iostream>

using namespace std;
int main(){
	
	cout << "Digite o seu salario: ";
	double sal;
	cin >> sal;
	
	double aumento,aumento2;
	
	if(sal<=280.00){
		aumento= (sal*0.2);
		aumento2= aumento+sal;
		cout<< "O salario antes do reajuste era: "<< sal<< endl;
		cout<< "O percentual de aumento aplicado eh: 20% "<< endl;
		cout<< "O valor do aumento eh: "<< aumento<< endl;
		cout<< "O novo salario, apos o aumento eh: "<< aumento2<< endl;
	}else if(sal >280.00 && sal <= 700.00){
		aumento= (sal*0.15);
		aumento2= aumento+sal;
		cout<< "O salario antes do reajuste era: "<< sal<< endl;
		cout<< "O percentual de aumento aplicado eh: 15% "<< endl;
		cout<< "O valor do aumento eh: "<< aumento<< endl;
		cout<< "O novo salario, apos o aumento eh: "<< aumento2<< endl;
	}else if(sal>700.00 && sal <=1500.00){
		aumento= (sal*0.10);
		aumento2= aumento+sal;
		cout<< "O salario antes do reajuste era: "<< sal<< endl;
		cout<< "O percentual de aumento aplicado eh: 10% "<< endl;
		cout<< "O valor do aumento eh: "<< aumento<< endl;
		cout<< "O novo salario, apos o aumento eh: "<< aumento2<< endl;
	}else if(sal >1500.00){
		aumento= (sal*0.05);
		aumento2= aumento+sal;
		cout<< "O salario antes do reajuste era: "<< sal<< endl;
		cout<< "O percentual de aumento aplicado eh: 5% "<< endl;
		cout<< "O valor do aumento eh: "<< aumento<< endl;
		cout<< "O novo salario, apos o aumento eh: "<< aumento2<< endl;
	}
	
	system("pause");
	
}
