#include <iostream>
#include <stdlib.h>
using namespace std;

int soma = 1;
int subtracao = 2;
int multiplicacaoPorEscalar = 3;
int multiplicacaoDeMatrizes = 4;
int sair = 0;

void cabecalho(){   //Função de cabecalho.
	cout<<"  ---------------------------------------------------------------------------------------------------------------\n";	
	cout<<"  |        -=-=-=-=-=-=-=-=-=-=-=-=-=-= PROGRAMA DE OPERAÇÕES DE MATRIZES =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-        |\n";
	cout<<"  |                                                                                                             |\n";
	cout<<"  | "<<soma<<" - SOMA | "<<subtracao<<" - SUBTRAÇÃO | "<<multiplicacaoPorEscalar<<" - MULTIPLICAÇÃO POR ESCALAR | "<<multiplicacaoDeMatrizes<<" - MULTIPLICAÇÃO ENTRE MATRIZES | "<<sair<<" - FINALIZAR |\n";
	cout<<"  --------------------------------------------------------------------------------------------------------------- \n";
	
	cout<<"\n";
}


int main () {
	setlocale(LC_ALL, "UTF-8");//Função que permite o uso de acentuações no programa
	
	cabecalho();
	
	int escolha;
	
	cout<<" Informe qual operação acima deseja realizar: ";
	cin>>escolha;
	
	do{

		if(escolha == soma){ //Área da soma das matrizes - Gustavo Muniz
			// PRIMEIRA MATRIZ
			int linhas1, colunas1;
			
			cout<<" Digite o numero de linhas da primeira matriz ";
			cin>>linhas1;
			
			cout<<" Digite o numero de colunas da primeira matriz ";
			cin>>colunas1;

			system("cls");
			cabecalho();

			int matriz1 [linhas1] [colunas1];
			
			for(int i=0 ; i<linhas1 ; i++){
				for(int j=0 ; j<colunas1 ;j++){
					cout<<" Linha: "<<i+1<<" coluna: "<<j+1<<"    ";
					cin>>matriz1[i][j];
				}
			}

			system("cls");
			cabecalho();

			cout<<"Primeira matriz : \n";
			for(int i=0;i<linhas1;i++){
				for(int j=0 ; j<colunas1 ; j++){
					cout<<matriz1[i][j]<<" ";
				}
				cout<<"\n";
			}
			
			// SEGUNDA MATRIZ
			int linhas2, colunas2;
			
			cout<<" Digite o número de linhas da segunda matriz ";
			cin>>linhas2;
			
			cout<<" Digite o número de colunas da segunda matriz ";
			cin>>colunas2;

			system("cls");
			cabecalho();

			int matriz2 [linhas2] [colunas2];
			
			for(int i=0 ; i<linhas2 ; i++){
				for(int j=0 ; j<colunas2 ;j++){
					cout<<" Linha: "<<i+1<<" coluna: "<<j+1<<"    ";
					cin>>matriz2[i][j];
				}
			}

			system("cls");
			cabecalho();

			cout<<"Segunda matriz: \n";
			for(int i=0;i<linhas2;i++){
				for(int j=0 ; j<colunas2 ; j++){
					cout<<matriz2[i][j]<<" ";
				}
				cout<<"\n";
			}
			
			//SOMA
			int matrizresposta[linhas1][colunas1];
			int ultimasoma[linhas1][colunas1];
			
			if(linhas1==linhas2 && colunas1==colunas2){
				
				for(int i=0 ; i<linhas1 ; i++){
					for(int j=0 ; j<colunas1 ;j++){
						matrizresposta[i][j] = matriz1[i][j] + matriz2[i][j];
					}
				}
				cout<<"Matriz resultante: \n";
				for(int i=0;i<linhas1;i++){
					for(int j=0 ; j<colunas1 ; j++){
						cout<<matrizresposta[i][j]<<" ";
					}
					cout<<"\n";
				}
				//variavel para guardar a ultima soma, caso for somar dnv
				for(int i=0;i<linhas1;i++){
					for(int j=0;j<colunas1;j++){
						ultimasoma[i][j]= matrizresposta[i][j];
					}
				}
			}
			else{
				cout<<" Nao é possivel fazer a soma das matrizes \n";
			}
		}
		else if(escolha == subtracao){ //Área de subtração de matrizes - William Costa
			int l1;
			int c1;
			int l2;
			int c2;
			
			cout << " Quantas linhas são sua 1 Matriz ? ";
			cin >> l1;
			
			cout << " Quantas colunas são sua 1 Matriz ? ";
			cin >> c1;

			system("cls");
			cabecalho();

			double matriz1[l1][c1];
			
			for(int i=0; i<l1; i++){
				for(int j=0; j<c1; j++){
					cout << "Linha: " << i << " Coluna : " << j << endl;
					cin >> matriz1[i][j];
				}
			}

			system("cls");
			cabecalho();
			
			cout << " Quantas linhas sao sua 2 Matriz ? ";
			cin >> l2;
			
			cout << " Quantas colunas sao sua 2 Matriz ? ";
			cin >> c2;
			
			system("cls");
			cabecalho();
			
			double matriz2[l2][c2];
			
			for(int i=0; i<l2; i++){
				for(int j=0; j<c2; j++){
					cout << "Linha: " << i << " Coluna : " << j << endl;
					cin >> matriz2[i][j];
				}
			}

			system("cls");
			cabecalho();

			cout << "\t\t Essas sao suas Matrizes: \n";
			cout << " \tMatriz 1: \n";
			for(int i=0; i<l1; i++){
				for(int j=0; j<c1; j++){
					cout << " " << matriz1[i][j] << " ";
				}
				cout << "\n";
			}
			cout << "\n";
			cout << " \tMatriz 2: \n";
			for(int i=0; i<l2; i++){
				for(int j=0; j<c2; j++){
					cout << " " << matriz2[i][j] << " ";
				}
				cout << "\n";
			}
			if(l1 != l2 && c1 != c2){
				cout << "\n";
				cout << " Para resolver Subtracao com Matrizes o numero de Colunas e Linhas devem ser iguais. Tente Novamente. ";
				return 0;
			}else{
				cout << "\n";
				cout << " O resultado da Subtracao e: ";
				cout << "\n";
				int subtracao[l1][c2];
				for(int i=0; i<l2; i++){
					for(int j=0; j<c2; j++){
						subtracao[i][j] = matriz1[i][j] - matriz2[i][j];
						cout << " " << subtracao[i][j] << " ";
					}
					cout << "\n";
				}
			}
		}
		else if(escolha == multiplicacaoPorEscalar){ //Área de multiplicação escalar de matrizes - João Pedro
			int li, co;
			
			cout<< "  Informe o número de linhas: ";
			cin>> li;
			cout<< "  Informe o número de colunas: ";
			cin>> co;
			
			int matriz [li][co];
			
			system("cls");
			cabecalho();

			cout<<" Matriz-----> \n";
			
			for (int i = 0; i < li; i++){	
				for (int j = 0; j < co; j++){
					cout<<"  Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin >> matriz [i][j];
				}
			}
			cout<< "\n";
			
			int mult_matriz;
			
			cout<< "  Informe o número que você quer multiplicar sua matriz: ";
			cin>> mult_matriz;
			
			cout<< "\n";
			
			cout<<" A matriz resultante é -----> \n";
			
			cout<< "\n";
			
			int matrizresultado[li][co];
			
			for (int i = 0; i < li; i++){
				for (int j = 0; j < co; j++){
					matrizresultado[i][j] = matriz [i][j] * mult_matriz;
				}
			}
			for (int i = 0; i < li; i++){
				for (int j = 0; j < co; j++){
					cout<<"  "<<matrizresultado[i][j];
				}
				cout<< "\n";
			}
		}
		else if(escolha == multiplicacaoDeMatrizes){ //Área de multiplicação de matrizes - Hemenson David
		
			int linhas1, linhas2, colunas1, colunas2;
			cout<<" Matriz 1-----> \n";
			cout<<"  Informe o número de linhas: ";
			cin>>linhas1;
			cout<<"  Informe o número de colunas: ";
			cin>>colunas1;
			cout<<" Matriz 2-----> \n";
			cout<<"  Informe o número de linhas: ";
			cin>>linhas2;
			cout<<"  Informe o número de colunas: ";
			cin>>colunas2;
			
			while(colunas1!=linhas2){
				system("cls");
				cabecalho();
				cout<<" ERRO! Tente novamente. \n";
				cout<<"\n";
				cout<<" Matriz 1-----> \n";
				cout<<"  Informe o número de linhas: ";
				cin>>linhas1;
				cout<<"  Informe o número de colunas: ";
				cin>>colunas1;
				cout<<" Matriz 2-----> \n";
				cout<<"  Informe o número de linhas: ";
				cin>>linhas2;
				cout<<"  Informe o número de colunas: ";
				cin>>colunas2;
			}
			
			double matriz1[linhas1][colunas1];
			double matriz2[linhas2][colunas2];	
			double matrizresultado[linhas1][colunas2];
			
			system("cls");
			cabecalho();
			cout<<" Matriz 1-----> \n";
			
			for(int i = 0; i<linhas1; i++){
				for(int j = 0; j<colunas1; j++){
					cout<<"  Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin>>matriz1[i][j];
				}
			}
			
			cout<<" Matriz 2-----> \n";
			for(int i = 0; i<linhas2; i++){
				for(int j = 0; j<colunas2; j++){
					cout<<"  Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin>>matriz2[i][j];
				}
			}
	
			double aux=0;
			double result;
				
			for(int i = 0; i<linhas1; i++){
				for(int j = 0; j<colunas2; j++){
					matrizresultado[i][j]=0;
					for(int a  = 0; a<linhas1; a++){
						aux += (matriz1[i][a] * matriz2[a][j]);
					}	
					matrizresultado[i][j] = aux;
					aux=0;
				}
			}
			
			cout<<"\n";
			cout<<" A matriz resultante é -----> \n";
			cout<<"\n";
			for(int i = 0; i<linhas1; i++){
				cout<<" | ";
				for(int j = 0; j<colunas2; j++){
					cout<<matrizresultado[i][j]<<"   ";
				}
				cout<<"\n";
			}
		}
		
		cout<<"\n\n\n";
		cout<<" Informe qual operação acima deseja realizar: ";
		cin>>escolha;
	}while(escolha!=sair);
}
