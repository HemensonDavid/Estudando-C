#include <iostream>
using namespace std;
int main(){
	int vetorA[5];
	int vetorB[10];
	int vetorC[10];
	
	for(int i=0;i<=4;i++){
		cout<<"Digite um numero: ";
		cin>> vetorA[i];
	}
	for(int i=5;i<=9;i++){
		cout<<"Digite um numero: ";
		cin>> vetorB[i];
	}
	for(int i=0;i<=4;i++){
		vetorC[i]=vetorA[i];
	}
	for(int i=5;i<=10;i++){
		vetorC[i]=vetorB[i];
	}
	
	for(int i=0;i<=9;i++){
		cout<<vetorC[i]<<endl;
	}
	return 0;
}
