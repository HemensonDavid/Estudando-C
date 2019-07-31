#include <iostream>
using namespace std;
int main(){
	int num[10];
	int maior=0;
	for(int i=0;i<=9;i++){
		cout<<"Digite um numero: ";
		cin>>num[i];
		if(num[i]>=maior){
			maior=num[i];
		}
		cout<<endl;
	}
	cout<<"O maior numero foi: "<<maior<<"\n";
	return 0;
}
