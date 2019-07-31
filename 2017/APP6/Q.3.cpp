#include <iostream>

using namespace std;
int main(){
	int nota;
	int media=0;
	
	for(int i=0;i<8;i++){
		
		cout<<"Digite sua nota: ";
		cin>>nota;
		
		media+=nota;
	}
	media/=8;
	if(media>=60){
		cout<<"Aprovado! "<<endl;
	}else{
		cout<<"Reprovado! "<<endl;
	}
}
