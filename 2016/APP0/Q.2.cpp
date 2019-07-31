#include <iostream>

using namespace std;
int main(){
	
	int lado;
	int count=1;
	
	cout << "Digite o lado do quadrado: ";
	cin >> lado;
	
	while(count<=(lado*lado)){
		
		if(count%lado==0){
			cout<<"*\n";
		}else{
			cout<<"*";
		}
		count++;
	}
	return 0;
}
