/*Realice un programa que lea una matriz de 5x5 
y cree su matriz traspuesta. La matriz traspuesta 
es aquella en la que la columna i era la fila i de 
la matriz original.*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int matriz[3][3];
	//crear matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:";
			//guardando la matriz
			cin>>matriz[i][j];
		}
	}	
	
	//mostrando matriz original
	cout<<"Matriz original\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	//mostrando matriz traspuesta
	cout<<"\nMatriz traspuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" "<<matriz[j][i]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
