#include <iostream>
using namespace std;
int main(){
	int num,soma=0;
	
	for(int i=1;i<=4;i++){
		cout<<endl;
		cout<<"Digite um numero: ";
		cin>>num;
		if(num%2==0){
			soma+=num;
		}
	}
	cout<<"A soma dos numeros par sao: "<<soma<<endl;
}
