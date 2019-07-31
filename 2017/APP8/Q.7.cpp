#include <iostream>
#include <messin.h>

using namespace std;
int main(){
	int x=2,y=3,z=4;
	int r1=0,r2=0,r3=0,r4=0;
	calcular_soma_produto_quadrado_e_modulo(x,y,z,&r1,&r2,&r3,&r4);
	cout<<"O valor da soma eh: "<<r1<<endl;
	cout<<"A multiplicacao do 1 numero pelo segundo eh: "<<r2<<endl;
	cout<<"O valor do Quadrado do primeiro eh: "<<r3<<endl;
	cout<<"O modulo do 1 numero pelo 2 numero eh: "<<r4<<endl;
}
