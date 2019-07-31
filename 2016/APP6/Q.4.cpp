#include <iostream>

using namespace std;
int main(){
	int i;
	int num;
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(i=0;i!=11;i++){
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}
