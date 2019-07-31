#include <iostream>
using namespace std;
int main(){
	
	int nums[10];
	double resp;
	
	for(int i=0;i<10;i++){
		cout<<"Digite um numero: ";
		cin>>nums[i];
	}
	for(int i=0;i<10;i++){
		resp+=nums[i];
	}
	resp=resp/10;
	cout<<"A media dos numeros eh: "<<resp<<endl;
	return 0;
}
