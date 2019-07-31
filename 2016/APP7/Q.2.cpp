#include <iostream>
using namespace std;
int main(){
	int num;
	int fatorial=1;
	cout<<"Informe seu numero: ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		fatorial*=i;
	}
	
	cout<<"O fatorial de "<<num<<" eh "<<fatorial<<endl;
	system("pause");
}
