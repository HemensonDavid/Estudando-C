#include <iostream>
using namespace std;
int main(){
	int A[7];
	int B[7];
	//
	for(int i=0;i<7;i++){
		cout<<"Digite um Numero A: ";
		cin>>A[i];
	}
	for(int i=0;i<7;i++){
		cout<<"Digite um Numero B: ";
		cin>>B[i];
	}
	for(int i=0;i<7;i++){
		cout<<A[i]<<" x "<<B[i]<<" = "<<A[i]*B[i]<<endl;
	}
	return 0;
}
