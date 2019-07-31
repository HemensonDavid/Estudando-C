#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	for(;;){
		
		cout<<"Digite um numero: ";
		cin>>num;
		
		if(num==0){
			return 0;
		}
		else if(num%3==0 && num%2==0){
			cout<<"O numero eh divisivel por 6! "<<endl;
		}else{
			cout<<"Nao eh divisivel por 6! "<<endl;
		}
	}
}
