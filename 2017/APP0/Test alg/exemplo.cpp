/*
INSTITUTO FEDERAL DE CI�NCIAS E TECNOLOGIA DO RIO GRANDE DO NORTE
TRABALHO DE MATEM�TICA - PROFESSOR: F�BIO DANTAS
ALUNOS: LUCAS EMANUEL, WILLIAM COSTA, GUSTAVO MUNIZ, JO�O PEDRO E HEMENSON DAVID
2� ANO - INFORM�TICA - 2017
TURNO: MATUTINO
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
void cabecalho(){   //Fun��o de cabecalho.
	cout<<"  ---------------------------------------------------------------------------------------------------------------\n";	
	cout<<"  |        -=-=-=-=-=-=-=-=-=-=-=-=-=-= PROGRAMA DE OPERA��ES DE MATRIZES =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-        |\n";
	cout<<"  |                                                                                                             |\n";
	cout<<"  | 1 - SOMA | 2 - SUBTRA��O | 3 - MULTIPLICA��O POR ESCALAR | 4 - MULTIPLICA��O ENTRE MATRIZES | 0 - FINALIZAR |\n";
	cout<<"  --------------------------------------------------------------------------------------------------------------- \n";
	
	cout<<"\n";
}
void tituloMatriz(){//Fun��o para exibi��o do t�tulo "Matriz----->"
	cout<<" Matriz-----> \n";
}
void tituloMatriz1(){//Fun��o para exibi��o do t�tulo "Matriz 1----->"
	cout<<" Matriz 1-----> \n";
}
void tituloMatriz2(){
	cout<<" Matriz 2-----> \n";//Fun��o para exibi��o do t�tulo "Matriz 2----->"
}
void tituloMatrizResultante(){//Fun��o para exibi��o do t�tulo "A matriz resultante � ----->"
	cout<<" A matriz resultante � -----> \n";
}
int main () {//Fun��o Principal
	setlocale(LC_ALL, "Portuguese");//Fun��o que permite o uso de acentua��es no programa
	
	cabecalho();
	
	int escolha, a, b;
	
	cout<<" Informe qual opera��o acima deseja realizar: ";
	cin>>escolha;
	
	do{
		while(escolha > 4 || escolha < 0){ //Em caso de o usu�rio digitar uma op��o inv�lida, aqui ser� o campo de corre��o.
			system("cls");
			cabecalho();
			cout<<" ERRO! Tente novamente. \n";
			cout<<"\n";
			cout<<" Informe qual opera��o deseja realizar: ";
			cin>>escolha;
		}
		system("cls");
		cabecalho();
		
		if(escolha == 1){ //�rea da soma das matrizes - Gustavo Muniz
				cout<<" N�mero de linhas: ";
				cin>>a;
		
				cout<<" N�mero de colunas: ";
				cin>>b;;	
		}
		else if(escolha == 2){ //�rea de subtra��o de matrizes - William Costa
			
		}
		else if(escolha == 3){ //�rea de multiplica��o escalar de matrizes - Jo�o Pedro
			int li, co;
	
			tituloMatriz();
			
			cout<< "     Informe o n�mero de linhas: ";
			cin>> li;
			cout<< "     Informe o n�mero de colunas: ";
			cin>> co;
			
			int matriz [li][co];
			
			system("cls");
			cabecalho();
			tituloMatriz();
			
			for (int i = 0; i < li; i++){	
				for (int j = 0; j < co; j++){
					cout<<"     Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin >> matriz [i][j];
				}
			}
			cout<< "\n";
			
			int mult_matriz;
			
			cout<< " Informe o n�mero que voc� quer multiplicar sua matriz: ";
			cin>> mult_matriz;
			
			cout<< "\n";
			
			tituloMatrizResultante();
			
			cout<< "\n";
			
			int matrizresultante[li][co];
			
			for (int i = 0; i < li; i++){
				for (int j = 0; j < co; j++){
					matrizresultante[i][j] = matriz [i][j] * mult_matriz;
				}
			}
			for (int i = 0; i < li; i++){
				for (int j = 0; j < co; j++){
					cout<<"  "<<matrizresultante[i][j];
				}
				cout<< "\n";
			}
		}
		else if(escolha == 4){ //�rea de multiplica��o de matrizes - Lucas Emanuel e Hemenson David
		
			int linhas1, linhas2, colunas1, colunas2;
			tituloMatriz1();
			cout<<"     Informe o n�mero de linhas: ";
			cin>>linhas1;
			cout<<"     Informe o n�mero de colunas: ";
			cin>>colunas1;
			tituloMatriz2();
			cout<<"     Informe o n�mero de linhas: ";
			cin>>linhas2;
			cout<<"     Informe o n�mero de colunas: ";
			cin>>colunas2;
			
			while(colunas1!=linhas2){
				system("cls");
				cabecalho();
				cout<<" ERRO! Tente novamente. \n";
				cout<<"\n";
				tituloMatriz1();
				cout<<"     Informe o n�mero de linhas: ";
				cin>>linhas1;
				cout<<"     Informe o n�mero de colunas: ";
				cin>>colunas1;
				tituloMatriz2();
				cout<<"     Informe o n�mero de linhas: ";
				cin>>linhas2;
				cout<<"     Informe o n�mero de colunas: ";
				cin>>colunas2;
			}
			
			double matriz1[linhas1][colunas1];
			double matriz2[linhas2][colunas2];	
			double matrizresultante[linhas1][colunas2];
			
			system("cls");
			cabecalho();
			tituloMatriz1();
			
			for(int i = 0; i<linhas1; i++){
				for(int j = 0; j<colunas1; j++){
					cout<<"     Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin>>matriz1[i][j];
				}
			}
			
			tituloMatriz2();
			for(int i = 0; i<linhas2; i++){
				for(int j = 0; j<colunas2; j++){
					cout<<"     Linha "<<i+1<<", coluna "<<j+1<<": ";
					cin>>matriz2[i][j];
				}
			}
	
			double aux=0;
			double result;
				
			for(int i = 0; i<linhas1; i++){
				for(int j = 0; j<colunas2; j++){
					matrizresultante[i][j]=0;
					for(int a  = 0; a<linhas1; a++){
						aux += (matriz1[i][a] * matriz2[a][j]);
					}	
					matrizresultante[i][j] = aux;
					aux=0;
				}
			}
			
			cout<<"\n";
			tituloMatrizResultante();
			cout<<"\n";
			for(int i = 0; i<linhas1; i++){
				cout<<" | ";
				for(int j = 0; j<colunas2; j++){
					cout<<matrizresultante[i][j]<<"   ";
				}
				cout<<"\n";
			}
		}
		
		cout<<"\n\n\n";
		cout<<" ______________________________________________ \n";
		cout<<" Informe qual opera��o acima deseja realizar: ";
		cin>>escolha;
	}while(escolha!=0);
	return 0;
}

