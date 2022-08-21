#include<iostream>
#include<conio.h>

using namespace std;

//prototipo de funcion 
void newval(int&,int&);


int main(){
	int num1=10,num2=5;
	
	cout<<"Valores actuales de num1 y num2\n";
	
	cout<<"Num1: "<<num1<<endl;
	cout<<"Num2: "<<num2<<endl;
	
	cout<<"\nIntercambio de valores";
	newval(num1,num2);
	cout<<"\nNum1: "<<num1<<endl;
	cout<<"Num2: "<<num2<<endl;
	
	
	getch();
	return 0;
}

void newval(int&numx,int&numy){
	int aux;
	
	aux=numx;
	numx=numy;
	numy=aux;
}
