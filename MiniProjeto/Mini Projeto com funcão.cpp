#include <iostream>
#include <stdlib.h>
using namespace std;

int IsEmpate_de_tres_materias(int mat1,int mat2,int mat3,double h_mat1,double h_mat2,double h_mat3,int id_mat1,int id_mat2,int id_mat3){
	//inicio do empate
   	cout<<"\t\tOcorreu um Empate!!\n";
   	if(mat1==mat2){	
    	if(id_mat1>id_mat2){
   			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    		cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}else if(id_mat2>id_mat1){
			cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}
		//
		if(id_mat1==id_mat2){
			cout<<"\t\tOutro Empate !!\n";	
			if(h_mat1>h_mat2){
				cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}else if(h_mat2>h_mat1){
				cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}
		}	
	}else if(mat1==mat3){		
   		if(id_mat1>id_mat3){
    		cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}else if(id_mat3>id_mat1){
			cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}
		//
		if(id_mat1==id_mat3){
			cout<<"\t\tOutro Empate !!\n";			
			if(h_mat1>h_mat3){
				cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}else if(h_mat3>h_mat1){
				cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}
		}
	}else if(mat3==mat2){		
   		if(id_mat3>id_mat2){
   			cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}else if(id_mat2>id_mat3){
			cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}
		//
		if(id_mat3==id_mat2){
			cout<<"\t\tOutro Empate !!\n";				
			if(h_mat3>h_mat2){
				cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
   				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}else if(h_mat2>h_mat3){
				cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
   				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}
		}
	}else if(mat1==mat3 && mat3==mat2 && mat1==mat2){  		
   		if(id_mat1>id_mat3 && id_mat1>id_mat2){
   			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}else if(id_mat2>id_mat1 && id_mat2>id_mat3){
   			cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    		cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}else if(id_mat3>id_mat1 && id_mat3>id_mat2){
   			cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
   			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
		}
		//
		if(mat1==mat3 && mat3==mat2 && mat1==mat2){
			cout<<"\t\tOutro Empate !!\n";			
			if(h_mat1>h_mat2 && h_mat1>h_mat3){
			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}else if(h_mat3>h_mat1 && h_mat3>h_mat2){
				cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}else if(h_mat2>h_mat1 && h_mat2>h_mat3){
				cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
			}
		}
	}	
}

void menu(int mat1,int mat2,int mat3,int branco,int finalizar){
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\n";
    cout<<"\t\tVotacao das disciplina mais show de bola do IFRN\n";
    cout<<"\t\tPara algoritmo  "<<mat1<<endl;
    cout<<"\t\tPara matematica "<<mat2<<endl;
    cout<<"\t\tPara fisica     "<<mat3<<endl;
    cout<<"\t\tBranco          "<<branco<<endl;
    cout<<"\t\tEncerrar votacao "<<finalizar<<endl;
    cout<<"\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\t\tDigite seu Voto:";
}

void confirmacao(){
	cout<<"Voto confirmado com sucesso!!\n";
}

void confirmacao_de_voto(){
	cout<<"Voce tem certeza que quer votar? sim/nao\n";
}

int main(){
	
	int voto;
	string nome;
	//inicio de variaveis de numero da materia
	const int alg_num=1;
	const int mat_num=2;
	const int fis_num=3;
	const int branco_num=4;
	const int finalizar=0;
	//final de variaveis de numero da materia
	
	//inicio variaveis de contagem de votos
	double alg=0;
	double mat=0;
	double fis=0;
	double nulo=0;
	double branco=0;
	//final de variaveis de contagem de votos
	
	//inicio variaveis de desempate
	const int id_alg=44;
	const int id_mat=43;
	const int id_fis=39;
	const double h_alg=1.83;
	const double h_mat=1.80;
	const double h_fis=1.73;
	//finail de variaveis de desempate
	
	do{
		menu(alg_num,mat_num,fis_num,branco_num,finalizar);
        cin>>voto;
        //
        if(voto==alg_num){
            cout<<"Voce esta votando em algoritmo\n";
            cout<<"Disciplina do professor karlos thadeu\n";
            confirmacao_de_voto();
            cin>>nome;
            if(nome=="sim"){
                alg++;
                confirmacao();
            }
        }else if(voto==mat_num){
            cout<<"Voce esta votando em Matematica\n";
            cout<<"Disciplina do professor George\n";
            confirmacao_de_voto();
            cin>>nome;
            if(nome=="sim"){
                mat++;
                confirmacao();
            }
        }else if(voto==fis_num){
            cout<<"Voce esta votando em Fisica\n";
            cout<<"Disciplina do professor Messias\n";
            confirmacao_de_voto();
            cin>>nome;
            if(nome=="sim"){
                fis++;
                confirmacao();
            }
        }else if(voto==branco_num){
            cout<<"Voce esta votando Branco!!\n";
            confirmacao_de_voto();
            cin>>nome;
            if(nome=="sim"){
                branco++;
                confirmacao();
            }
        }else if(voto!=finalizar){
            cout<<"Seu voto sera computado nulo \n";
            confirmacao_de_voto();
            cin>>nome;
            if(nome=="sim"){
            	nulo++;
            	confirmacao();
			}
        }
        system("cls");
	}while(voto!=finalizar);
	
	
	double soma_dos_votos;
	soma_dos_votos=alg+mat+fis+branco;
	
	//inicio da quantidade de votos e porcentagem
	cout<<"\n";
	cout<<"A disciplina de algoritmo teve: "<<alg<<" Votos, Totalizando: "<<alg/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"A disciplina de Matematica teve: "<<mat<<" Votos, Totalizando: "<<mat/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"A disciplina de Fisica teve: "<<fis<<" Votos, Totalizando: "<<fis/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"Votos Brancos: "<<branco<<" Votos, Totalizando: "<<branco/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";;
    cout<<"Votos Nulos: "<<nulo<<endl;
    cout<<"\n";
    //fim da quantidade de votos e porcentagem
   	
   	
    //inicio da execução do resultado final
    if(alg>fis && alg>mat){
    	cout<<"\tResultado Final:\n";
    	cout<<"\t\tA Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
	}else if(fis>alg && fis>mat){
    	cout<<"\tResultado Final:\n";
    	cout<<"\t\tA Disciplina de Fisica foi eleita como a mais show de bola.\n";
	}else if(mat>alg && mat>fis){
    	cout<<"\tResultado Final:\n";
    	cout<<"\t\tA Disciplina de Matematica foi eleita como a mais show de bola.\n";
	}
    //final da execução do resultado final
    
    //resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug;
    if(alg==0 || mat==0 || fis==0){
    	if(alg==0){
   			alg-=1;
		}
		if(mat==0){
			mat-=2;
		}
		if(fis==0){
			fis-=3;
		}
	}
    //resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug;
    
    //inicio do empate
    if(alg==mat || alg==fis || fis==mat){
    	IsEmpate_de_tres_materias(alg,mat,fis,h_alg,h_mat,h_fis,id_alg,id_mat,id_fis);
	}//fim do empate

	system("pause");
}//fim do progama;
