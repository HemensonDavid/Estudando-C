#include <iostream>

using namespace std;
int main(){
	
	cout<<"Digite o numero maximo do triangulo\n";
	cout<<"Atencao o numero tem quer ser impar!!\n";
	int num_max,i,j;
	cin>> num_max;
	
	if(num_max%2==0){
		cout<<"\t\tNumero Invalido\n";
		return 0;
	}
	
	for(i=0; i<= (num_max/2)+1;i++){
		for ( j = i + 1; j <= num_max - i; j++ )
            {
                cout<<""<<j<<endl;
            }
        cout<<"\n";

            for ( j = 0; j < (i + 1) * 2; j++ )
              cout<<(" ");
	}
	
	
	
}
