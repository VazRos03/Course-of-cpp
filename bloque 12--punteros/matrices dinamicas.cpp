//matriz dinamica 
/*

LOGICA DE UNA MATRIZ DINAMICA
**puntero_matriz --> *puntero_fila -> [int] [int]
                     *puntero_fila -> [int] [int]
                     *puntero_fila -> [int] [int]

en una matriz dinamica, usamos de base los punteros de las filas
llegando a la ubicacion de las filas, nos muestra las columnas 

ejemplo
 
 1 2 3     1 --> 2 3
 4 5 6     4 --> 5 6
 7 8 9     7 --> 8 9
*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>// new y delete

using namespace std;

int **puntero_matriz; //para una matriz dinamica, debemos poner un puntero dentro de otro puntero
int nfil,ncol;

void pedir_datos(){
	cout<<"ingrese el numero de filas: ";cin>>nfil;
	cout<<"Ingrese el numero de columnas: ";cin>>ncol;
	
	puntero_matriz = new int *[nfil];//reservando memoria para filas
	/*como podemos notar, en filas es un puntero y en columnas no, esto debido a que 
	solo es necesario que filas sea un puntero para mostrar a las columnas de la matriz*/
	
	for(int i = 0; i<nfil; i++){
		puntero_matriz[i] = new int [ncol];//reservando memoria para columnas
	}
	
	cout<<"\nDigitando elementos de la matriz: \n";
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
			//es como poner cin>>matriz[i][j] pero con punteros
		}
	}
}

//parametros para mostrar la matriz
void mostrar(int**puntero_matriz,int nfil, int ncol){
	cout<<"\n\nImprimiendo matriz \n";
	
	//ciclo para mostrar a la matriz dinamica
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";//cout<<matriz[i][j] pero con punteros
		}
		cout<<"\n";
	}
	
}
int main(){
	pedir_datos();
	mostrar(puntero_matriz,nfil,ncol);
	
	//delete para una matriz dinamica
	
	for (int i=0; i<nfil;i++){
		delete[] puntero_matriz[i];//liberando filas 
	}
	//liberando columnas
	delete[] puntero_matriz;
	
	
	getch();
	return 0;
}