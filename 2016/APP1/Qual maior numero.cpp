#include <iostream>

using namespace std;
int main(){
	
	cout<< "Digite o primeiro numero: ";
	int num1;
	cin >> num1;
	
	cout<< "Digite o segundo numero: ";
	int num2;
	cin >> num2;
	
	if(num1>num2){
		cout<< "O maior numero foi o: "<< num1 << "; e o menor numero foi o: "<< num2<< endl;
	}else{
		cout<< "O maior numero foi o: "<< num2 << "; e o menor numero foi o: "<< num1<< endl;
	}
	
	system("pause");
	
	
	
	
}
