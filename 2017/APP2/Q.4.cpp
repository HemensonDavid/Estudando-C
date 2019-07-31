#include <iostream>

using namespace std;
int main(){
	
	int num;
	
	cout<<"Informe um numero: ";
	cin>>num;
	
	for(int i=0;i<10;i++){
		cout<<(num*2)+1<<endl;
		num++;
	}
	return 0;
}
