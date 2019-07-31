#include <iostream>

using namespace std;
int main(){
	int num;
	int r;
	
	cout<<"Digite um numero: ";
	cin>>num;
	r=num;
	
	for(int i=num-1;i!=0;i--){
		r*=i;
	}
	cout<<"O fatorial de "<<num<<" eh: "<<r<<endl;
	return 0;
}
