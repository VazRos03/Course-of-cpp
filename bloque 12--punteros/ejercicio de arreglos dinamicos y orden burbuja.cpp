/*practica de punteros 
crear un array dinamico y ordenar sus elementos de forma ascendente con el metodo que desees
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>//funciones new y delete para array dinamico

using namespace std;
//variables globales 
int array,*dir_array,i,j,aux;

//funcion para crear array
void crear(){
	
	cout<<"CREACION DE ARRAY Y ORDEN DE TIPO BURBUJA\n\nDigite la cantidad de valores en su array: ";
	cin>>array;
	
	dir_array = new int [array];//creando el arreglo dinamico
	
	for(int i =0; i<array; i++){
		cout<<"\nDigite un numero: "; cin>>dir_array[i];
	}
}

//funcion para ordenar los elementos de forma ascendente 
void orden(){
	
	for(int i =0; i<array;i++){
		for(int j =0; j<array;j++){
			if(dir_array[j]>dir_array[j+1]){
				aux = dir_array[j];
				dir_array[j]= dir_array[j+1];
				dir_array[j+1]= aux;
			}
		}
	}
	
	cout<<"Orden correcto de su arreglo: ";
	for(int i =0; i<array; i++){
		cout<<dir_array[i+1];
	}
}


int main(){
	
	crear();
	orden();
	
	delete [] dir_array;
	
	
	getch();
	return 0;
}