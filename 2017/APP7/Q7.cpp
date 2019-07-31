#include <iostream>
using namespace std;
main (){
	
	string nome;
	
	cout << "Informe o seu nome: ";
	cin >> nome;
	
	for (int i = 0; i < 3; i ++){
		
		nome [i] = 'X';
	}
	
	cout << "O nome apos a execucao do programa eh: " << nome << ".\n";
}
