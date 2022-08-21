#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de funciones
void datos();
void al_cuadrado(float x);

float num1,num2;//variable global

//funcion principal
int main(){
	datos();
	al_cuadrado(num1);
	
	getch();
	return 0;
}

void datos(){
	cout<<"Digite un numeros: ";
	cin>>num1;
}

void al_cuadrado(float x){
	float cuadrado=x*x;
	
	cout<<"Resultado: "<<cuadrado<<endl;
}
