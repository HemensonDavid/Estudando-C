#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	int n1;
	int n2;
	
	for(;;){
		cout<<"Digite um numero: ";
		cin>> n1;
		
		cout<<"Digite outro numero: ";
		cin>>n2;
		
		cout<<"O primeiro numero elevado ao segundo eh: "<<pow(n1,n2)<<endl;
		cout<<endl;
	}
}
