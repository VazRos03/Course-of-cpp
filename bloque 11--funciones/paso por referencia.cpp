//paso por parametros por referencia

#include<iostream>
#include<conio.h>
using namespace std;

void val(int&,int&);

int main(){
	
	int num1,num2;
	
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;
	
	val(num1,num2);
	
	cout<<"Nuevo valor del primer numero: "<<num1<<endl;
	cout<<"NUevo valor del segundo numero: "<<num2<<endl;
	
	
	
	getch();
	return 0;
}

void val(int&numx,int&numy){
	cout<<"Valor del primer numero: "<<numx<<endl;
	cout<<"Valor del segundo numero;"<<numy<<endl;
	
	numx=87;
	numy=56;
}
