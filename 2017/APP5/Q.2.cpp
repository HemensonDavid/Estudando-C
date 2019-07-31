#include <iostream>

using namespace std;

double media(int x,int y,int z){
	int r=(x+y+z)/3;
	return r;
}

int main(){
	double m[3];
	
	for(int i=0;i<3;i++){
		cout<<"Digite sua media: ";
		cin>>m[i];
	}
	cout<<"Sua media aritmetica eh: "<<media(m[0],m[1],m[2])<<endl;
	return 0;
	//hemenson
}
