#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int num;
	
	cout<<"Informe seu numero: ";
	cin>>num;
	if(num==-1){
		return 0;
	}
	
	cout<<"Seu seno eh: "<<cos(num)<<endl;
	return 0;
}
