#include <iostream>

using namespace std;
int main(){
	
	int voto;
	string nome;
	double alg=0;
	double mat=0;
	double fis=0;
	double nulo=0;
	double branco=0;
	//variaveis de desempate
	int id_alg=44;
	int id_mat=43;
	int id_fis=39;
	double h_alg=1.83;
	double h_mat=1.80;
	double h_fis=1.73;
	//finais de variaveis de desempate
	do{
		//
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\n";
        cout<<"\t\tVotacao das disciplina mais show de bola do IFRN\n";
        cout<<"\t\tPara algoritmo  609\n";
        cout<<"\t\tPara matematica 124\n";
        cout<<"\t\tPara fisica     6666\n";
        cout<<"\t\tBranco          1111\n";
        cout<<"\t\tEncerrar votacao 0000\n";
        cout<<"\n";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        //
        cout<<"\t\tDigite seu Voto:";
        cin>>voto;
        //
        if(voto==609){
            cout<<"Voce esta votando em algoritmo\n";
            cout<<"Disciplina do professor karlos thadeu\n";
            cout<<"Voce tem certeza que quer votar? sim/nao\n";
            cin>>nome;
            if(nome=="sim"){
                alg+=2;
                cout<<"Voto confirmado com sucesso!!\n";
            }
        }else if(voto==124){
            cout<<"Voce esta votando em Matematica\n";
            cout<<"Disciplina do professor George\n";
            cout<<"Voce tem certeza que quer votar? sim/nao\n";
            cin>>nome;
            if(nome=="sim"){
                mat++;
                cout<<"Voto confirmado com sucesso!!\n";
            }
        }else if(voto==6666){
            cout<<"Voce esta votando em Fisica\n";
            cout<<"Disciplina do professor Messias\n";
            cout<<"Voce tem certeza que quer votar? sim/nao\n";
            cin>>nome;
            if(nome=="sim"){
                fis++;
                cout<<"Voto confirmado com sucesso!!\n";
            }
        }else if(voto==1111){
            cout<<"Voce esta votando Branco!!\n";
            cout<<"Voce tem certeza que quer votar? sim/nao\n";
            cin>>nome;
            if(nome=="sim"){
                branco++;
                cout<<"Voto confirmado com sucesso!!\n";
            }
        }else if(voto!=0000){
            cout<<"Seu voto sera computado nulo \n";
            cout<<"Voce tem certeza que quer votar nulo? sim/nao ";
            cin>>nome;
            if(nome=="sim"){
            	nulo++;
            	cout<<"Voto anulado com sucesso!!\n";
			}
        }
	}while(voto!=0000);
	//porcentagem de votos by:lucas Emanuel
	double soma_dos_votos;
	soma_dos_votos=alg+mat+fis+branco;
	//fim da porcentagem by:lucas Emanuel
	
	//quantidade de votos e porcentagem de votos
	cout<<"\n";
	cout<<"A disciplina de algoritmo teve: "<<alg<<" Votos, Totalizando: "<<alg/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"A disciplina de Matematica teve: "<<mat<<" Votos, Totalizando: "<<mat/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"A disciplina de Fisica teve: "<<fis<<" Votos, Totalizando: "<<fis/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";
    cout<<"Votos Brancos: "<<branco<<" Votos, Totalizando: "<<branco/soma_dos_votos *100 <<"%"<<" Dos Votos!\n";;
    cout<<"Votos Nulos: "<<nulo<<endl;
    cout<<"\n";
    //fim da quantidade de votos
    
    //resultado final
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
    //final do resultado final
    
    //resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug;
    if(alg==0 || mat==0 || fis==0){
    	if(alg==0){
    		alg=alg-1;
		}
		if(mat==0){
			mat=mat-2;
		}
		if(fis==0){
			fis=fis-3;
		}
	}
    //resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug; resevado para bug;
    
    //empate
    if(alg==mat || alg==fis || fis==mat){
    	cout<<"\t\tOcorreu um Empate!!\n";
    	if(alg==mat){
    		
    		if(id_alg>id_mat){
    			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}else if(id_mat>id_alg){
				cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}
			//
			if(id_alg==id_mat){
				cout<<"\t\tOutro Empate !!\n";
				
				if(h_alg>h_mat){
					cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}else if(h_mat>h_alg){
					cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}
			}	
		}else if(alg==fis){
    		
    		if(id_alg>id_fis){
    			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}else if(id_fis>id_alg){
				cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}
			//
			if(id_alg==id_fis){
				cout<<"\t\tOutro Empate !!\n";
				
				if(h_alg>h_fis){
					cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}else if(h_fis>h_alg){
					cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}
			}
		}else if(fis==mat){
    		
    		if(id_fis>id_mat){
    			cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}else if(id_mat>id_fis){
				cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}
			//
			if(id_fis==id_mat){
				cout<<"\t\tOutro Empate !!\n";
				
				if(h_fis>h_mat){
					cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}else if(h_mat>h_fis){
					cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}
			}
		}else if(alg==fis && fis==mat && alg==mat){
    		
    		if(id_alg>id_fis && id_alg>id_mat){
    			cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}else if(id_mat>id_alg && id_mat>id_fis){
    			cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}else if(id_fis>id_alg && id_fis>id_mat){
    			cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    			cout<<"Como criterio de desempate foi usado a idade do Professor\n";
			}
			//
			if(alg==fis && fis==mat && alg==mat){
				cout<<"\t\tOutro Empate !!\n";
				
				if(h_alg>h_mat && h_alg>h_fis){
					cout<<"A Disciplina de Algoritmo foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}else if(h_fis>h_alg && h_fis>h_mat){
					cout<<"A Disciplina de Fisica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}else if(h_mat>h_alg && h_mat>h_fis){
					cout<<"A Disciplina de Matematica foi eleita como a mais show de bola.\n";
    				cout<<"Como criterio de desempate foi usado a Altura do Professor\n";
				}
			}
		}
	}//fim do empate
	system("pause");
}//fim do progama;
