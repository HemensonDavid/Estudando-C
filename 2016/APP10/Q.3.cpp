#include <iostream>
using namespace std;
int main(){
	int vetorsA[10];
	//
	for(int i=0;i<10;i++){
		cout<<"Digite o Valor: ";
		cin>>vetorsA[i];
	}
	//
	int par=0;
	int imp=0;
	int parX=0;
	int impX=0;
	//
	for(int i=0;i<10;i++){
		if(vetorsA[i]%2==0){
			par++;
			if(vetorsA[i]>parX){
				parX=vetorsA[i];
			}
		}else{
			imp++;
			if(vetorsA[i]>impX){
				impX=vetorsA[i];
			}
		}
	}
	cout<<"Foram Digitados: "<<par<<" Numero(s) Pares."<<endl;
	cout<<"Foram Digitados: "<<imp<<" Numero(s) Impares."<<endl;
	cout<<"O Maior Numero Par foi: "<<parX<<endl;
	cout<<"O Maior Numero Impar foi: "<<impX<<endl;
	//
	return 0;
}
