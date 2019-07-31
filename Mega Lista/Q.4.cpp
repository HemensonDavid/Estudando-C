#include <iostream>
using namespace std;
int main(){
	int x,y;
	
	cout<<"Digite o numero X: ";
	cin>>x;
	
	cout<<"Digite o numero Y: ";
	cin>>y;
	
	double r1=x/y;
	double r2=x%y;
	cout<<"O Quociente eh: "<<r1<<", e a sobra foi: "<<r2<<endl;
	system("pause");
}
