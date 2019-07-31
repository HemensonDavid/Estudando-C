#include <iostream>
using namespace std;
int main(){
	int maior=0;
	int num;
	for(int i=1;i<=3;i++){
		cout<<"Digite Um Numero: ";
		cin>>num;
		if(maior==0){
			maior=num;
		}else if(num>maior){
			maior=num;
		}
	}
	cout<<"O maior Numero foi: "<<maior<<endl;
}
