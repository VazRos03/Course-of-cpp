/*Elevación de un Número sin retorno de valor*/

#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de funciones 
void datos();
void funpot(int x,int y);

int num,poten;

int main(){
	cout<<"\tElevacion de una potencia\n";
	
	datos();
	funpot(num,poten);
	
	getch();
	return 0;
}

void datos(){
	cout<<"Digite un numero: ";
	cin>>num;
	cout<<"Digite la potencia a la que quiere elevarlo: ";
	cin>>poten;
}

void funpot(int x,int y){
	long res=1;
	
	for(int i=0;i<y;i++){
		res*=x;
	}
	
	cout<<"Resultado: "<<res;
}









