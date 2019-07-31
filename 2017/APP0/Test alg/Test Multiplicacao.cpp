#include <iostream>
using namespace std;

int main(){
	const int l=2;
	const int c=2;
	
	int matA[l][c], matB[l][c];
	
	matA[0][0]=1;
	matA[0][1]=4;
	matA[1][0]=2;
	matA[1][1]=1;
	
	matB[0][0]=2;
	matB[0][1]=3;
	matB[1][0]=5;
	matB[1][1]=4;
	
	int matR[l][c];
	int aux=0;
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			aux=0;
			for(int k=0;k<l;k++){
				aux=aux+matA[i][k]*matB[k][j];
			}
			matR[i][j]=aux;
		}
	}
	
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			cout<<matR[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
