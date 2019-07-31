#include <iostream>
using namespace std;
int main(){
	int nums[10];
	int maior=0;
	int menor=0;
	
	for(int i=0;i<10;i++){
		cout<<"Digite um numero: ";
		cin>>nums[i];
		
		if(nums[i]>maior){
			maior=nums[i];
		}if(menor==0){
			menor=nums[i];
		}if(nums[i]<=menor){
			menor=nums[i];
		}
	}
	
	cout<<"O maior numero foi: "<<maior<<endl;
	cout<<"O menor numero foi: "<<menor<<endl;
	return 0;
}
