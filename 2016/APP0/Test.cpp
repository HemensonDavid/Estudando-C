#include <iostream>

using namespace std;
int main(){
	
	int inicio; //inicio da contagem;
	int fim; //onde para a contagem;
	
	cout<<"Digite um numero: ";
	cin >> inicio;
	
	cout<<"Digite outro numero: ";
	cin >> fim;
	
	while(inicio<fim){
		if(inicio %2!=0){
			cout<<inicio<<endl;
		}
		inicio++;
	}

}
