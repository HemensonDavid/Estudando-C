/*
INSTITUTO FEDERAL DE CIÊNCIAS E TECNOLOGIA DO RIO GRANDE DO NORTE
TRABALHO DE MATEMÁTICA - PROFESSOR: FÁBIO DANTAS
ALUNOS: LUCAS EMANUEL, WILLIAM COSTA, GUSTAVO MUNIZ, JOÃO PEDRO E HEMENSON DAVID
2º ANO - INFORMÁTICA - 2017
TURNO: MATUTINO
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
void cabecalho(){   //Função de cabecalho.
	cout<<"  ---------------------------------------------------------------------------------------------------------------\n";	
	cout<<"  |        -=-=-=-=-=-=-=-=-=-=-=-=-=-= PROGRAMA DE OPERAÇÕES DE MATRIZES =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-        |\n";
	cout<<"  |                                                                                                             |\n";
	cout<<"  | 1 - SOMA | 2 - SUBTRAÇÃO | 3 - MULTIPLICAÇÃO POR ESCALAR | 4 - MULTIPLICAÇÃO ENTRE MATRIZES | 0 - FINALIZAR |\n";
	cout<<"  --------------------------------------------------------------------------------------------------------------- \n";
	
	cout<<"\n";
}
void tituloMatriz(){//Função para exibição do título "Matriz----->"
	cout<<" Matriz-----> \n";
}
void tituloMatriz1(){//Função para exibição do título "Matriz 1----->"
	cout<<" Matriz 1-----> \n";
}
void tituloMatriz2(){
	cout<<" Matriz 2-----> \n";//Função para exibição do título "Matriz 2----->"
}
void tituloMatrizResultante(){//Função para exibição do título "A matriz resultante é ----->"
	cout<<" A matriz resultante é -----> \n";
}
int main () {//Função Principal
	setlocale(LC_ALL, "Portuguese");//Função que permite o uso de acentuações no programa
	
	cabecalho();
	
	int escolha, a, b;
	
	cout<<" Informe qual operação acima deseja realizar: ";
	cin>>escolha;
	
	do{
		while(escolha > 4 || escolha < 0){ //Em caso de o usuário digitar uma opção inválida, aqui será o campo de correção.
			system("cls");
			cabecalho();
			cout<<" ERRO! Tente novamente. \n";
			cout<<"\n";
			cout<<" Informe qual operação deseja realizar: ";
			cin>>escolha;
		}
		system("cls");
		cabecalho();
		
		if(escolha == 1){ //Área da soma das matrizes - Gustavo Muniz
				cout<<" Número de linhas: ";
				cin>>a;
		
				cout<<" Número de colunas: ";
				cin>>b;;	
		}
		else if(escolha == 2){ //Área de subtração de matrizes - William Costa
			
		}
		else if(escolha == 3){ //Área de multiplicação escalar de matrizes - João Pedro
			int li, co;
	
			tituloMatriz();
			
			cout<< "     Informe o número de linhas: ";
			cin>> li;
			cout<< "     Informe o número de colunas: ";
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
			
			cout<< " Informe o número que você quer multiplicar sua matriz: ";
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
		else if(escolha == 4){ //Área de multiplicação de matrizes - Lucas Emanuel e Hemenson David
		
			int linhas1, linhas2, colunas1, colunas2;
			tituloMatriz1();
			cout<<"     Informe o número de linhas: ";
			cin>>linhas1;
			cout<<"     Informe o número de colunas: ";
			cin>>colunas1;
			tituloMatriz2();
			cout<<"     Informe o número de linhas: ";
			cin>>linhas2;
			cout<<"     Informe o número de colunas: ";
			cin>>colunas2;
			
			while(colunas1!=linhas2){
				system("cls");
				cabecalho();
				cout<<" ERRO! Tente novamente. \n";
				cout<<"\n";
				tituloMatriz1();
				cout<<"     Informe o número de linhas: ";
				cin>>linhas1;
				cout<<"     Informe o número de colunas: ";
				cin>>colunas1;
				tituloMatriz2();
				cout<<"     Informe o número de linhas: ";
				cin>>linhas2;
				cout<<"     Informe o número de colunas: ";
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
		cout<<" Informe qual operação acima deseja realizar: ";
		cin>>escolha;
	}while(escolha!=0);
	return 0;
}

