/*primer ejercicio, 
tabla de multiplicae de un numero*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero;
	
	do{
		cout<<"Digite un numero:";cin>>numero;
	}while((numero<1)||(numero>10));
    //esto es para el rango del 1-10
	
	for(int i=1;i<=20;i++){
	/*hara la tabla de multiplicar*/
		cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
	}
	getch();
	return 0;
}
