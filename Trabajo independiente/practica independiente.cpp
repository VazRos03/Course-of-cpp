/*vamos a tratar de crear un programa 
juntando matrices con cadenas*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	char cad[100];
	int matriz1[100][100];
	int matriz2[100][100];
	int filas,columnas;
	int resultado=0;
	int longuitud;
	//pidiendo cadena
	cout<<"Digite una oracion: ";cin.getline(cad,100,'\n');
	//calculando la cantidad de elementos de cadena
	cout<<"\n";
	longuitud=strlen(cad);
	cout<<"Numeros de elementos de la cadena: "<<longuitud<<"\n";
	//sabiendo si es par o impar el num de elemntos
	cout<<"\n";
	cout<<"Resultado de division de la cadena\n";
	if(longuitud%2==0){
		resultado=(longuitud/3);
	    cout<<" resultado: "<<resultado<<endl;	
	}cout<<"\n";
	//crear y copiar matrices 
	cout<<"Matrices\n";
	cout<<"Del resultado del calculo y division de la cadena\n";
	cout<<"crea una matriz cuadrada\n";
	cout<<"Ejemplo: resultado=3 entonces matriz de 3x3\n";
	
	cout<<"\n";
	
	cout<<"Num. de filas y columnas\n";
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;cout<<"\n";
	//crear matrices
	
	cout<<"Creando matriz\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matriz1[i][j];
		}
	}
	//copiando matriz1 en matriz2
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j]=matriz1[i][j];
		}
	}
	cout<<"\n";
	//mostrando matriz traspuesta
	cout<<"Matriz traspuesta\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[j][i];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
