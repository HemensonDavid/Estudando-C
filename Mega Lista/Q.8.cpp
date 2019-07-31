#include <iostream>
using namespace std;
int main(){
	double d,v;
	
	cout<<"Informe a Distancia da Pista: ";
	cin>>d;
	
	cout<<"Informe a velocidade que estava sendo percorrida: ";
	cin>>v;
	
	double multa= v-d;
	
	if(multa==10){
		cout<<"\t\tVoce foi multado!!\n";
		cout<<"\tVoce devera pagar 50 reais de multa!";
	}else if(multa>=11 && multa<=30){
		cout<<"\t\tVoce foi multado!!\n";
		cout<<"\tVoce devera pagar 100 reais de multa!";
	}else if(multa>=31){
		cout<<"\t\tVoce foi multado!!\n";
		cout<<"\tVoce devera pagar 200 reais de multa!";
	}
}
