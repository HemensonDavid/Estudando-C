#include <iostream>

using namespace std;
int main(){	
	int num1;
	int num2;
	
	cout<<"Digite um numero: ";
	cin >> num1;	
	
	cout<<"Digite outro numero: ";
	cin >> num2;
	
	for(;num1!=num2;num1++){
		if(num1%2==0){
			cout<<num1<<endl;
		}
	}
	
	return 0;
	
}
