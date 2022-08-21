/*
Punteros : Transmision de direcciones
*/

#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de la funcion 
void inter(float *, float*);//para declarar en los parametros lo punteros, debemos poner el tipo de variable  y despues el asterisco


int main(){
	float num1 = 12.3, num2 = 15.8;
	
	cout<<"Numero uno: "<<num1<<endl;
	cout<<"Numero dos: "<<num2<<endl;
	
	
	inter(&num1,&num2);//aqui lo que estamos haciendo es llamar a las direcciones de memoria de num1 y num2 como parametros donde estaban los punteros

	printf("nuevos valores\n");
	
	cout<<"New valor num1: "<<num1<<endl;
	cout<<"New valor num2: "<<num2<<endl;
	
	
	getch();
	return 0;
}

void inter(float *pun_num1, float *pun_num2){
	float aux;
	
	//intercambio de valores
	aux = *pun_num1;
	*pun_num1 = *pun_num2;
	*pun_num2 = aux;
}