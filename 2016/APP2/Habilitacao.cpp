#include <iostream>

using namespace std;
int main(){
	
	cout<<"Digite seu ano de nacimento: ";
	int ano;
	cin >> ano;
	
	int nacimento;
	nacimento= 2016-ano;
	
	if(nacimento >= 18){
		cout<< "Voce ja pode fazer habilitacao! :)"<< endl;
	}else{
		cout<< "Voce nao pode fazer habilitacao! :("<< endl;
	}
	
	system("pause");
	
	
}
