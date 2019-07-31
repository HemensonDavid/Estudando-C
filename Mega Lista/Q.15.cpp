#include <iostream>
using namespace std;
int main(){
	do{
		int a;
		cout<<"--------------------------------------------------------\n";
		cout<<"\n";
		cout<<"\tDigite qual convercao vc deseja usar :\n";
		cout<<"\t\t1.....................Real para Dolar!\n";
		cout<<"\t\t2.....................Dolar para Real!\n";
		cout<<"\t\t0.....................Para Sair\n";
		cout<<"\n";
		cout<<"--------------------------------------------------------\n";
		cin>>a;
		if(a==1){
			double real;
			double dolar;
			
			cout<<"Digite o valor a ser transformado em dolar: ";
			cin>>real;
			
			dolar=real/2.40;
			cout<<"O valor eh: "<<dolar<<" Dolar(es)"<<endl;
		}else if(a==2){
			double real;
			double dolar;
			
			cout<<"Digite o valor a ser transformado em reais: ";
			cin>>dolar;
			
			real=dolar*2.40;
			cout<<"O valor eh: "<<real<<" Reais"<<endl;
		}else{
			cout<<"\t\tAlternativa invalida !\n";
			cout<<"\t\tTente Novamente\n";
		}
		
	}while(a!=0);
}
