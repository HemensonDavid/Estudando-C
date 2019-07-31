#include <iostream>
#include <ctype.h>

using namespace std;
int main(){
	cout<<"digite uma letra: ";
	char letra;
	cin>>letra;
	
	char letra_maiuscula= toupper(letra);
	cout<<letra_maiuscula;
	
}
