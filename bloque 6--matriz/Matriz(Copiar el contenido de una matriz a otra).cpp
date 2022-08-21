/*Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, 
llenarla de números y luego copiar todo su contenido 
hacia otra matriz.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numero[2][2]={{1,2},{3,4}};//creado matriz
	int matriz[2][2];//creando la otra matriz
	
	
	//Pasando el contenido de numeros a matrizS
	for(int i=0;i<2;i++){//filas
		for(int j=0;j<2;j++){//columnas
		 matriz[i][j]=numero[i][j];	
		}	
	}
	//mostrando matriz
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		cout<<matriz[i][j];	//en matriz no se agregan endl
		}
		cout<<"\n";	
	}
	
	getch();
	return 0;
}
