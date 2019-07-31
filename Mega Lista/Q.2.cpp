#include <iostream>
using namespace std;
int main(){
	int nota,aux=0;
	for(int i=1;i<=4;i++){
		cout<<"Informe Sua Nota: ";
		cin>>nota;
		aux+=nota;
	}
	aux/=4;
	if(aux>=7){
		cout<<"\t\tAprovado\n";
	}else if(aux>=5 && aux<7){
		cout<<"\t\tRecuperacao\n";
	}else{
		cout<<"\t\tReprovado\n";
	}
}
