#include <iostream>

using namespace std;
int main(){
	
	int num=1;
	int cont=1;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	cout<<"Pares \tImpares\n";
	
	while(cont<=num){
		if(cont%2==1){
			cout<<"\t"<<cont<<endl;
		}else{
			cout<<""<<cont;
		}
		cont++;
	}
	system("pause");
}
