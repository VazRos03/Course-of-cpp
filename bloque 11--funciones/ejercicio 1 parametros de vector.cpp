/*realie un programa donde se realice la suma de los elemntos de un vector que 
sera solicitado al usuario*/
#include<iostream>
#include<conio.h>
using namespace std;

void vector1();
int suma(int vec[],int);

//variable goblal 
int vec[100],tam;

int main(){
	vector1();
	cout<<"Resultado: "<<suma(vec,tam);
	
	getch();
	return 0;
}
//funcion de solicitud de datos del vector
void vector1(){
	cout<<"Digite el numero de lementos del vector";cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}
//suma 
/*la funcion es int y no void por que debe retornar un valor
  recuerda que void no retorna valores*/
int suma(int vec[],int tam){
	int suma;
	for(int i=0;i<tam;i++){
		suma+=vec[i];
	}
	return suma;//es por que debe regresar el valor de la suma
}
