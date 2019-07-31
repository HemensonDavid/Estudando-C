#include <iostream>

using namespace std;
int main(){
	int num;
	
	cout<<"informe um numero: ";
	cin>> num;
	
	for(int i=0;i<=100;i++){
		cout<<num<<" X "<<i<<" = "<< num*i<<endl;
	}
	return 0;	
}
