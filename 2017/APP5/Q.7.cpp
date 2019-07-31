#include <iostream>

using namespace std;

int ismedia(int nota1, int nota2, int nota3, int nota4){
	int media=(nota1*2)+(nota2*2)+(nota3*3)+(nota4*3)/10;
	if(media>=60){
		return 1;
	}
}

int main(){
	cout<<"Digite sua nota no 1 bimestre: ";
	int nota1;
	cin>> nota1;
	
	cout<<"Digite sua nota no 2 bimestre: ";
	int nota2;
	cin>> nota2;
	
	cout<<"Digite sua nota no 3 bimestre: ";
	int nota3;
	cin>> nota3;
	
	cout<<"Digite sua nota no 4 bimestre: ";
	int nota4;
	cin>> nota4;
	
	if(ismedia(nota1,nota2,nota3,nota4)==1){
		cout<<"Voce nao passou. "<<endl;
	}else{
		cout<<"voce passou :) "<<endl;
	}
	//hemenson
}

