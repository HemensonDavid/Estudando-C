#include <iostream>
using namespace std;
int main(){
	int i; //primeiro alg.
	int x; //oq multiplica.
	for(i=1;i<=1000000;i++){
		for(x=0;x<=10;x++){
			cout<<i<<" X "<<x<<" = "<<i*x<<endl;
		}
		cout<<endl;
		x=0;
	}
	return 0;
}
