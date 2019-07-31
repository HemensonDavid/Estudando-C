#include <iostream>
using namespace std;
int main(){
	int num_max[7];
	int maior=0;
	int aux=0;
	for(int i=0;i<=6;i++){
		cout<<"Digite um numero: ";
		cin>>num_max[i];
	}
	for(int i=0;i<=6;i++){
		if(num_max[i]>maior){
			maior=num_max[i];
			aux=i;
		}
	}
	cout<<maior<<" eh o maior numero, "<<" e se encontra na posicao "<<aux<<endl;
	return 0;
}
