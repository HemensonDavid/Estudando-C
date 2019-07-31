#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	string nome;
	cout<<"Digite seu nome: ";
	cin>>nome;

	for (int i = 0; i < 3; i ++){
		nome [i] = 'X';
	}	
	cout << "O nome apos a execucao do programa eh: " << nome << ".\n";
	cout<<nome.length();
}
