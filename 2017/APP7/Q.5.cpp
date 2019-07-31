#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	
	char caractere;
	char result,r2;
	
	cout<<"Digite um caractere: ";
	cin>>caractere;
	
	result=isupper(caractere);
	r2=tolower(caractere);
	
	if(result==1){
		cout<<"O caractere invertido eh: "<<r2<<endl;
	}else{
		cout<<"O caractere ja esta em minusculo "<<endl;
	}
	
	return 1;
	
}
