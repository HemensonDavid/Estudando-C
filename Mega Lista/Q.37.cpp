#include <iostream>
using namespace std;
int main(){
	
	string resposta="sim";
	char sexo;
	int formacao;
	int idade;
	
	while(resposta=="sim"){
		cout<<"\tBem Vindo a entrevista de emprego\n";
		cout<<"\t\tInforme seu sexo (M/F): \n";
		cin>>sexo;
		
		cout<<"\tQual sua formacao escolar: \n";
		cout<<"\t(1 para fundamental, 2 para medio e 3 para superior) \n";
		cin>>formacao;
		
		cout<<"\tDigite a sua idade: ";
		cin>>idade;
		
		if(sexo=='f'&&idade<25&&formacao ==2){
			cout<<"\t\tCargo de Recepcionista\n";
		}else if(sexo=='m'&&idade>40&&formacao==1){
			cout<<"\t\tCargo de Servente\n";
		}else if(sexo == 'M' || sexo == 'F' && idade <30&&formacao==3){
			cout<<"\t\tCargo de Auxiliador de RH\n";
		}else{
			cout<<"\t\tNao ah Cargos disponiveis\n";
		}
		cout<<"Voce ainda quer continuar? ";
		cin>> resposta;
	}
	system("pause");
}

