#include <iostream>

using namespace std;
int main(){
	
	int inicio=1; //cria uma variavel que determina o inicio do numero;
	int fim=1; //cria outra variavel que determina o final do numero;
	
	while(inicio==fim){
		cout<<"Digite um Numero: ";
		cin>>inicio;
			
		cout<<"Digite outro numero: ";
		cin>>fim;
		while(inicio != fim){
			
			if(fim<=inicio){
				cout<<"\t\tErro!!\n"<<endl;
				cout<<"O Utimo numero eh maior que o primeiro."<<endl;
				cout<<"volte sempre!!"<<endl;
				return 1; //erro do progama pois o ultimo numero é maior que o primeiro, fazendo um loop infinito;
			}
			else if(inicio%2==1){
				cout<<""<<inicio<<endl;
			}
			inicio++ ;
		}
			
	}
	system("pause");
}
