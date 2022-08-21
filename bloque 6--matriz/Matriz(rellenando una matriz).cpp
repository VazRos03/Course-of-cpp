/*vamos a crear un programa usando matrices donde pida
al usuario el número de filas y columna, para 
posteriormente mostrarlo en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int numeros[100][100],filas,columnas;
	cout<<"Digite el numero de filas:";cin>>filas;
	cout<<"Digite el numero de columnas:";cin>>columnas;
	
	
	//Almacenando los numeros de filas y columnas
	for(int i=0;i<filas;i++){//controla las filas
		for(int j=0;j<columnas;j++){//controla las columnas
		cout<<"Digite un numero["<<i<<"]["<<j<<"]:";
		cin>>numeros[i][j];
		}
		 
	}
	
	//junatando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){//imprimiendo la matriz
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}	
	getch();
	return 0;
}
