#include <iostream>
using namespace std;
int main(){
	int A[5];
	int B[5];
	int C[5];
	
	for(int i=0;i<5;i++){
		cout<<"Digite os Numeros do Vetor A: ";
		cin>>A[i];
		
		cout<<"Digite os Numeros do Vetor B: ";
		cin>>B[i];
	}
	for(int i=0;i<5;i++){
		C[i]=A[i];
		A[i]=B[i];
		B[i]=C[i];
	}
	cout<<"Valores do Vetor A: \n";
	for(int i=0;i<5;i++){
		cout<<A[i]<<endl;
	}
	cout<<"Valores do Vetor B: \n";
	for(int i=0;i<5;i++){
		cout<<B[i]<<endl;
	}
	return 0;
}
