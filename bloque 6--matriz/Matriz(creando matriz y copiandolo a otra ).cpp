/*Hacer una matriz preguntando al usuario el numero de 
filas y columnas,llenarla de números aleatorios, copiar 
el contenido a otra matriz y por último mostrarla 
en pantalla.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int matriz1[100][100];
	int matriz2[100][100];
	int filas, columnas;
	
	cout<<"Digite la cantidad de filas:";cin>>filas;
	cout<<"Digite la cantidad de columnas:";cin>>columnas;
	
	//creando la matriz1
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:";
			cin>>matriz1[i][j];
		}
	}
	
	//copiando lo de la matriz1 a la matriz2
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	//mostrando la matriz2
	for(int i=0;i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
