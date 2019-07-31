#include <iostream>
using namespace std;
int main(){
	string nome[5];
	for(int i=0;i<=4;i++){
		cout<<"Informe um nome: ";
		cin>>nome[i];
		cout<<endl;
	}
	for(int i=4;i>=0;i--){
		cout<<nome[i];
		cout<<endl;
	}
	return 0;
}
