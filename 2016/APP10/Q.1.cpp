#include <iostream>
using namespace std;
int main(){
	string vetors[5];
	vetors[0]="Ola Mundo";
	vetors[1]="Hello World";
	vetors[2]="Hola mundo";
	vetors[3]="Hallo Welt";
	vetors[4]="Hello Dunia";
	//
	cout<<"Digite um numero entre 0 e 4: ";
	int escolha;
	cin>>escolha;
	for(int i=0;i<5;i++){
		if(i==escolha){
			cout<<vetors[i]<<endl;
			break;
		}
	}
	return 0;
}
