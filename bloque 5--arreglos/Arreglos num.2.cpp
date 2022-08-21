/*aqui usaremos lo misma que la vez pasada pero en 
multiplicacion.*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int variables[6]={1,2,3,4,5,6};
	int mult=1;
	
	for(int i=0;i<6;i++){
		mult*=variables[i];	
	}
	cout<<"Resultado:\n"<<mult<<endl;
	getch();
	return 0;
}
