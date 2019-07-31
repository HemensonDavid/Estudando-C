#include <iostream>

using namespace std;
int main(){
	
	string senha,sv;
	string nome,nv;
	int i;	
	
	cout<<"Digite seu nome: ";
	cin>>nome;
		
	cout<<"Digite sua senha: ";
	cin>>senha;
	for(i=0;i!=3;i++){
		cout<<"Confirme seu nome: ";
		cin>>nv;		
		cout<<"Confirme sua senha: ";
		cin>>sv;		
		if(nome==nv&&senha==sv){
			cout<<"\t\tBem Vindo!!\n";
			return 1;
		}else{
			cout<<"\t\tTente novamente!!\n";
		}
	}
	cout<<"Tentativa Esgotada!!\n";
	return 0;
}
