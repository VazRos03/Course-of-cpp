#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[5] = {1,2,3,4,5};
	
	for(int i=4;i>=0;i--){
		cout<<i<<"-->"<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
