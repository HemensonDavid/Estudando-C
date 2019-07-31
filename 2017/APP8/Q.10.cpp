#include <iostream>
#include <messin.h>
using namespace std;

int main(){
	int x=8;
	int y=4;
	int *r1=&x;
	int *r2=&y;
	
	troca_de_Variavel(r1,r2);
	cout<<"X --> "<<x<<endl;
	cout<<"Y --> "<<y<<endl;
	system("pause");
}
