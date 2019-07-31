#include <iostream>
using namespace std;
int main(){
	cout<<"Informe a quantos anos voce fuma: ";
	int ano;
	cin>>ano;
	
	cout<<"Numero de cigarros fumados por dia: ";
	int dia;
	cin>>dia;
	
	cout<<"Quanto custa a carteira de cigarro: ";
	double carteira;
	cin>>carteira;
	
	double total;
	total=(ano*360)*(dia)*(carteira/20);
	cout<<"Voce teria economizado: R$ "<<total<<endl;
	system("pause");
}
