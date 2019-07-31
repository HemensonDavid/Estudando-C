#include <iostream>
using namespace std;
int main(){
	cout<<"Digite a medida do altura : ";
	int al;
	cin>>al;
	
	cout<<"Digite a medida do Base: ";
	int b;
	cin>>b;
	
	int a,p;
	a=b*al;
	p=2*(b*al);
	cout<<"A area eh "<<a<<endl;
	cout<<"O perimetro eh "<<p<<endl;
	return 0;
}
