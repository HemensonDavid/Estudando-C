#include <iostream>

using namespace std;

double isimc(double peso,int altura){
	double r_imc=peso/(altura*altura);
	return r_imc;
}

int main(){
	
	cout<<"Digite seu peso: ";
	double peso;
	cin>>peso;
	
	cout<<"Digite sua altura: ";
	double altura;
	cin>>altura;
	
	double r_imc=isimc(peso,altura);
	
	if(r_imc<17){
		cout<<"Muito abiaxo do peso. "<<endl;
	}else if(r_imc>=17&&r_imc<=18.49){
		cout<<"Abaixo do peso. "<<endl;
	}else if(r_imc>=18.5&&r_imc<=24.99){
		cout<<"Peso normal. "<<endl;
	}else if(r_imc>=25&&r_imc<=29.99){
		cout<<"Acima do peso. "<<endl;
	}else if(r_imc>=30&&r_imc<=34.99){
		cout<<"Obesidade I ."<<endl;
	}else if(r_imc>=35&&r_imc<=39.99){
		cout<<"Obesidade II ."<<endl;
	}else if(r_imc>=40){
		cout<<"Obesidade II"<<endl;
	}
	//hemenson
}
