#include <iostream>
using namespace std;
int main(){
	int num_max[15];
	for(int i=0;i<=14;i++){
		cout<<"Digite um Numero: ";
		cin>>num_max[i];
		cout<<endl;
	}
	
	cout<<"Digite um numero X: ";
	int x;
	cin>> x;
	
	for(int i=0;i<=14;i++){
		if(num_max[i]==x){
			cout<<endl;
			cout<<"X esta presente\n";
			break;
		}
	}
	return 0;
}
