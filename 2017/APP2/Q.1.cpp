#include <iostream>

using namespace std;
int main(){
	int num;
	int r=0;
	
	cout<<"Informe um numero: ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		r+=i;
	}
	cout<<"O valor da soma entre 1 e o numero informado eh: "<<r<<endl;
}
