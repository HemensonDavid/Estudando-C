#include <iostream>
using namespace std;

int elevar(int n1,int n2){
	int aux=1;
	for(int i=0;i<n2;i++){
		aux*=n1;
	}
	return aux;
}

int main(){
	
	cout<<elevar(2,3)<<endl;
	return 0;
}
