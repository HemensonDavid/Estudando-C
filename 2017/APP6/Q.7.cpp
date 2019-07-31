#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num;
	
	for(int i=0;i<10;i++){
		cout<<"Informe seu numero: ";
		cin>>num;
		cout<<"Seu seno eh: "<<tan(num)<<endl;
	}
	return 0;
}
