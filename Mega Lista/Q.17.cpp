#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int pi=3.14;
	
	cout<<"Digite o valor do raio: ";
	double raio;
	cin>>raio;
	
	double a=pi*pow(raio,2);
	double c=2*pi*raio;
	cout<<"A area eh: "<<a<<endl<<"O comprimento eh: "<<c<<endl;
	
}
