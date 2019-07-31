#include <iostream>
#include <messin.h>
using namespace std;

struct Maior_num{
	int num_x;
	int num_y;
};

numero_maior(Maior_num numeros){
	if(numeros.num_x>=numeros.num_y){
		return numeros.num_x;
	}else{
		return numeros.num_y;
	}
}

int main(){
	Maior_num numeros;
	
	cout<<"Digite um numero x: ";
	cin>> numeros.num_x;
	cout<<"Digite um numero y: ";
	cin>> numeros.num_y;
	cout<<"O Maior Numero foi: "<<numero_maior(numeros);
}
