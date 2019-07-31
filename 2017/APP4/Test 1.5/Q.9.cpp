#include <iostream>
using namespace std;

int multiplicacaoarray(int n1[],int n2[]){
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(i==j){
				cout<<n1[i]<<" X "<<n2[j]<<" = "<<n1[i]*n2[j]<<endl;
			}
		}
	}
}

int main(){
	int n1[7];
	int n2[7];
	
	for(int i=0;i<7;i++){
		cout<<"Digite um numero A: ";
		cin>>n1[i];
	}
	for(int i=0;i<7;i++){
		cout<<"Digite um numero B: ";
		cin>>n2[i];
	}
	multiplicacaoarray(n1,n2);
	system("pause");
	
}
