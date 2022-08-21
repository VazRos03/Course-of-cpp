/*´programa para saber si una matriz es 
simetrica y convertirla en una matiz traspuesta */
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[100][100],filas,columnas;
	char band='f';
	cout<<"Digite un numero de filas:";cin>>filas;
	cout<<"Digite un numero de columnas:";cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"digite un numero["<<i<<"]["<<j<<"]:";
			cin>>numeros[i][j];
		}
	}
	
	//condicionales para saber si la matriz es simetrica
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j]==numeros[j][i]){
					band='v';
				}
			}
		}
	}
	//condicionale para mostrar la matriz utilizando bandera
	if(band=='v'){
		cout<<"La matriz es simetrica\n";
	}
	
	else{
		cout<<"La matriz no es simetrica\n";
	}
	//mostrando matriz original
	cout<<"Matriz original\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	//mostrando matriz traspuesta
	cout<<"Matriz traspuesta\n";
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[j][i];
		}
		cout<<"\n";
	}//no se agrega endl a la hora de mostrar matrices
	getch();
	return 0;
}
