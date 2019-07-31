#include <iostream>

using namespace std;
int main(){
	
	int opc;
	int m_identidade=1,m_multiplicar=2,m_adicao=3,m_subtracao=4;
	
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"		Digite Que tipo de matriz voce quer ?\n";
	cout<<"	Opcao Disponivel: \n";
	cout<<"Identidade "<<m_identidade<<endl;
	cout<<"Multiplicar sua Matriz "<<m_multiplicar<<endl;
	cout<<"Adicao de matrizes "<<m_adicao<<endl;
	cout<<"Subtracao de matrizes "<<m_subtracao<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"Digite a sua opcao: ";
	cin>>opc;
	cout<<"\n";
	
	if(opc==1){
		int n;
		int mat1 [100] [100];
		
		cout<<"Digite a dimensao da matriz: ";
		cin>> n;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j){
					mat1 [i] [j]=1;
				}else{
					mat1 [i] [j]=0;
				}
			}
		}
		cout<<"\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat1 [i] [j]<<" ";
			}
			cout<<"\n";
		}
		return 0;
	}
	
	if(opc==2){
		int n;
		int x=100,y=100;
		int mat1[x][y];
		
		cout<<"Informe a quantidade de linhas da sua matriz: ";
		cin>>x;
		cout<<"Informe a quantidade de colunas de sua matriz: ";
		cin>>y;
		
		cout<<"Digite por quanto quer multiplicar sua matriz: ";
		cin>>n;
		
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				cout<<"Preencha sua matriz: ";
				cin>>mat1[i][j];
			}
		}
		
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				mat1[i][j]*=n;
			}
		}
		
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				cout<<mat1[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	
	if(opc==3){
		
		int a=100,b=100;
		int mat1[a][b];
		int mat2[a][b];
		int mat3[a][b];
		
		cout<<"Digite quantas linhas tem suas matrizes: ";
		cin>>a;
		cout<<"Digite quantas colunas tem suas matrizes: ";
		cin>>b;

		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<"Digite os elementos da matriz 1: ";
				cin>>mat1[i][j];
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<"Digite os elementos da matriz 2: ";
				cin>>mat2[i][j];
			}
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				mat3[i][j]= mat2[i][j]+mat1[i][j];
			}
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<mat3[i][j]<<" ";
			}
			cout<<endl;
		}
		return 0;
	}
	
	if(opc==4){
		int a=100,b=100;
		int mat1[a][b];
		int mat2[a][b];
		int mat3[a][b];
		
		cout<<"Digite quantas linhas tem suas matrizes: ";
		cin>>a;
		cout<<"Digite quantas colunas tem suas matrizes: ";
		cin>>b;

		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<"Digite os elementos da matriz 1: ";
				cin>>mat1[i][j];
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<"Digite os elementos da matriz 2: ";
				cin>>mat2[i][j];
			}
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				mat3[i][j]= mat1[i][j]-mat2[i][j];
			}
		}
		
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cout<<mat3[i][j]<<" ";
			}
			cout<<endl;
		}
		return 0;
		system("pause");
	}
	
	
}
