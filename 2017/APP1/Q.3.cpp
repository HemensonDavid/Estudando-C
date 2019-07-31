#include <iostream>
using namespace std;
int main(){
	int inicio;
	int final;
	
	cout<<"Digite o Inicio: ";
	cin>> inicio;
	
	cout<<"Digite o Final: ";
	cin>>final;
	
	while(inicio<=final){
		if(inicio%2==0){
			cout<<inicio<<endl;
		}
		inicio++;
	}
	return 0;
}
