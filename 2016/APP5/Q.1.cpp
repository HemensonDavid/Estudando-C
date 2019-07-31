#include <iostream>
#include <math.h>

using namespace std;
int main(){
	
	int questao;
	
	cout<<"Informe um Numero: \n";
	
	cout<<"\t1 . Verificar se Triangulo eh Equilatero, Isosceles ou Escaleno.\n";
	cout<<"\t2 . Verificar obrigatoriedade do Voto.\n";
	cout<<"\t3 . Calcular o IMC de uma pessoa.\n";
	cout<<"\t4 . Calcular a media final do aluno.\n";
	cout<<"\t5 . Transformar graus Fahrenheit para graus Celsius.\n";
	cout<<"\t6 . Equacao do Segundo Grau.\n";
	cout<<"\t7 . Calcular Area de um Retangulo.\n";
	cout<<"\t8 . Calcular Area de um Circulo.\n";
	cout<<"\t9 . Informar a tabuada de multiplicacao de um numero.\n";
	cout<<"\t10. Calcular a media de um aluno.\n";
	cout<<"\t0 . Sair.\n";
	
	cin>>questao;
	
	while(questao >= 1 && questao <= 10){
		
		if(questao==1){
			
			cout<< "Digite o Lado 1: ";
			double la;
			cin>> la;
			
			cout<< "Digite o Lado 2: ";
			double lb;
			cin>> lb;
			
			cout<< "Digite o Lado 3: ";
			double lc;
			cin>> lc;
			
			if((la==lb)&&(la==lc)&&(lb==lc)){
				cout<< "Seu Triangulo eh equilatero"<< endl; // todos lados iguais
			}else if((la==lb)&&(la==lc)||(lb==lc)){
				cout<< "Seu Triangulo eh isosceles"<< endl; // 2 lados iguais
			}else{
				cout<< "Seu Triangulo eh escaleno"<< endl; // todos lados diferentes
			}		
		}else if(questao==2){
			
			cout<<"Informe sua idade: ";
			int idade;
			cin >>idade;
			
			if(idade>=16 && idade <18 || idade>=60 && idade<=100){
				cout<<"Voce nao eh Obrigado a votar!!\n";
			}else if(idade>=18 && idade < 60){
				cout<<"Voce eh Obrigado a votar!!\n";
			}else{
				cout<<"Voce nao pode votar !!\n";
			}
		}else if(questao ==3){
			cout<< "Informe seu Peso: ";
			double peso;
			cin >> peso;
			
			cout<<"Informe sua altura: ";
			double altura;
			cin>> altura;
			
			double imc;
			imc= peso/pow(altura,2);
			
			if(imc<17){
				cout<<"Muito Abaixo do Peso!!\n";
			}else if(imc>=17&&imc<=18.49){
				cout<<"Abaixo do Peso!!\n";
			}else if(imc>=18.5 && imc<=24.99){
				cout<<"Peso Normal!!\n";
			}else if(imc>=25 && imc <=29.99){
				cout<<"Acima do Peso!!\n";
			}else if(imc>=30 && imc <= 34.99){
				cout<<"Obesidade I\n";
			}else if(imc >= 35 && imc <=39.99){
				cout<<"Obesidade II \n";
			}else{
				cout<<"Obesidade III\n";
			}
		}else if(questao ==4){
			cout << "Digite a primeira nota: ";
			int nota1;
			cin>> nota1;	
			
			cout << "Digite a segunda nota: ";
			int nota2;
			cin>> nota2;
			
			cout << "Digite a terceira nota: ";
			int nota3;
			cin >> nota3;
			
			cout << "Digite a quarta nota: ";
			int nota4;
			cin >> nota4;
			
			int media;
			media = (nota1+nota2+nota3+nota4)/4;
			
			if(media >= 60){
				cout<< "Voce foi aprovado por media! :)"<< endl;
			}else if(media < 60 && media > 30){
				cout<< "Voce Esta em Recuperacao :P"<< endl;
			}else{
				cout<< "Voce esta Reprovado :( "<<endl;
			}
		}else if(questao ==5){
			cout<<"Informe os Graus em Fahrenheit: ";
			double f,c;
			cin>>f;
			
			c= (f-32)/1.8;
			cout<<"Os Graus em Celsius eh: "<<c<<endl;
		}else if(questao ==6){
			cout<< "Digite o valor de A: ";
			int valor_a;
			cin >> valor_a;
			
			if(valor_a == 0){
				cout << "A equacao nao eh de segundo grau!"<< endl;
				return 1;
			}
			cout << "Digite o valor de B: ";
			int valor_b;
			cin >> valor_b;
			
			cout << "Digite o valor de C: ";
			int valor_c;
			cin>> valor_c;
			
			int delta,raiz;
			delta = pow(valor_b,2) - (4*valor_a*valor_c);
			
			if(delta<0){
				cout<< "A equacao nao possui raizes reais! "<< endl;
				return 2;
			}
			if(delta==0){
				cout<< "A equacao possui uma raiz";
				raiz = ((-1)*valor_b + sqrt(delta))/(2*valor_a);
				cout<< "A raiz da equacao eh "<< raiz <<endl;
				return 3;
			}
			if(delta >0){
				cout<< "A equacao possui 2 raizes!"<< endl ;
				int raiz1,raiz2;
				raiz1 = ((-1)*valor_b + sqrt(delta))/(2*valor_a);
		        raiz2 = ((-1)*valor_b - sqrt(delta))/(2*valor_a);
		        cout<< "A raiz 1 da equacao eh: "<< raiz1<< endl;
		        cout<< "A raiz 2 da equacao eh: "<< raiz2<< endl;
			}
		}else if(questao == 7){
			cout<< "Informe a Base do Retangulo: ";
			double base;
			cin >> base;
			
			cout<<"Informe a Altura do Retangulo: ";
			double altura;
			cin >> altura;
			
			double a;
			a= base*altura;
			
			cout<<"A Area do retangulo eh: "<<a<<endl;
		}else if(questao ==8){
			cout <<"Informe o raio do circulo: ";
			double raio;
			cin >> raio;
			
			double area;
			float pi=3.14;
			
			area= pi*pow(raio,2);
			cout<<"A area do circulo eh: "<< area<<endl;
		}else if(questao == 9){
			int num=0;
			int num2=0;
			
			cout<<"Digite um numero: ";
			cin>> num;
			
			while(num>=0){
				num2=0;//dps de repetir o numero do contador volta a ser 0;
				while(num>=0 && num2<=10){
					cout<<""<<num<<" x "<<""<<num2<<" = "<<num*num2<<endl;
					num2++;
				}
				cout<<"Digite um numero: ";
				cin>> num;
			}
		}else if(questao==10){
			cout << "Digite a primeira nota: ";
			int nota1;
			cin>> nota1;	
			
			cout << "Digite a segunda nota: ";
			int nota2;
			cin>> nota2;
			
			cout << "Digite a terceira nota: ";
			int nota3;
			cin >> nota3;
		
			int media;
			media = (nota1+nota2+nota3)/3;
			
			if(media >= 60){
				cout<< "Voce foi aprovado por media! :)"<< endl;
			}else if(media < 60 && media > 30){
				cout<< "Voce Esta em Recuperacao :P"<< endl;
			}else{
				cout<< "Voce esta Reprovado :( "<<endl;
			}
		}
		
	cout<<"Informe um Numero: \n";
	
	cout<<"\t1 . Verificar se Triangulo eh Equilatero, Isosceles ou Escaleno.\n";
	cout<<"\t2 . Verificar obrigatoriedade do Voto.\n";
	cout<<"\t3 . Calcular o IMC de uma pessoa.\n";
	cout<<"\t4 . Calcular a media final do aluno.\n";
	cout<<"\t5 . Transformar graus Fahrenheit para graus Celsius.\n";
	cout<<"\t6 . Equacao do Segundo Grau.\n";
	cout<<"\t7 . Calcular Area de um Retangulo.\n";
	cout<<"\t8 . Calcular Area de um Circulo.\n";
	cout<<"\t9 . Informar a tabuada de multiplicacao de um numero.\n";
	cout<<"\t10. Calcular a media de um aluno.\n";
	cout<<"\t0 . Sair.\n";
	
	cin>>questao;
				
	} 	//fim do while ;
	cout<<"\t\tVolte Sempre!!\n";
	system("pause");
}
