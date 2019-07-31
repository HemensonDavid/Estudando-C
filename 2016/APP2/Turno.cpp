#include <iostream>

using namespace std;
int main(){
	
	cout<< "Ola, Em que turno voce estuda?. Exemplo: M-matutino ou V-Vespertino e N- Noturno ";
	char turno;
	cin >> turno;
	
	if(turno=='M'){
		cout<< "Bom Dia!"<< endl;
	}else if(turno=='V'){
		cout << "Boa Tarde!"<< endl;
	}else{
		cout << "Boa Noite!"<< endl;
	}
	
	system("pause");
	
	
	
	
}
