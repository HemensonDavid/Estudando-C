#include <iostream>

using namespace std;
int main(){
	cout << "Digite a primeira nota ";
	int nota1;
	cin>> nota1;	
	
	cout << "Digite a segunda nota ";
	int nota2;
	cin>> nota2;
	
	cout << "Digite a terceira nota ";
	int nota3;
	cin >> nota3;
	
	int media;
	media = (nota1 + nota2+nota3)/3;
	
	cout<< "Sua media aritimetica eh "<< media<< endl;
	
	if(media >= 60){
		cout<< "Voce foi aprovado por media! :)"<< endl;
	}else{
		cout<< "Voce Nao foi aprovado! :("<< endl;
	}
	
	system ("pause");
}
