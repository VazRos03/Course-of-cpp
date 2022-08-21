#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int matriz[50][50];
	int num1=0,num2=0;
	
	cout<<"Creador de matrices \n";
	
	cout<<"Ingrese la cantidad de filas: ";cin>>num1;
	cout<<"Ingrese la cantidad de columnas: ";cin>>num2;
	
	//creador de matriz
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
		cout<<"Ingrese un valor:["<<i<<"]["<<j<<"]:";
		cin>>matriz[i][j];	
		}
	}
	
	cout<<"\nMatriz\n";
	//imprimiendo matriz
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz traspuesta\n";
	//matriz traspuesta
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			cout<<matriz[j][i];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
