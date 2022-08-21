/* asignacion dinamica de arreglos 

new : proporciona espacio de almacenamiento persistente, similar pero superior a la función de Librería Estándar malloc. 
Este operador permite crear un objeto de cualquier tipo, incluyendo tipos definidos por el usuario, y devuelve un puntero 
(del tipo adecuado) al objeto creado.


delete : El operador delete se usa para liberar la memoria dinámica reservada con new. 
La expresión será normalmente un puntero, el operador delete[] se usa para liberar memoria de arrays dinámicos. 
Es importante liberar siempre usando delete la memoria reservada con new.

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>//libreria para funciones new y delete

using namespace std;
int numcalif, *calif;

void pedirnotas(){
	cout<<"Digite la cantidad de notas: ";
	cin>>numcalif;
	
	calif= new int[numcalif];//creando arreglo de tipo dinamico 
	
	for(int i=0; i<numcalif; i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
}

void mostrarnotas(){
	cout<<"\n \nCalificaciones finales\n"<<endl;
	
	//ciclo para mostrar array dinamico
	for(int i = 0; i<numcalif; i++){
		cout<<calif[i]<<endl;
		
	}
	
	
}

int main(){
	
	pedirnotas();
	mostrarnotas();
	
	delete[] calif;//liberando el espacio de bytes utilizados en el puntero
	
	
	return 0;
	getch();
}

