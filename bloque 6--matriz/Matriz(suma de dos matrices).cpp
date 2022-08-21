/* Realice un programa que calcule la suma 
de dos matrices de 3x3.*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	
	//crear la matriz 1
	cout<<"Matriz 1\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]:";
			cin>>matriz1[i][j];	
		};
	}
	//crear la matriz 2
	cout<<"Matriz 2\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";
			cin>>matriz2[i][j];
		}
	}
	//suma de la matriz1 y matriz2 en matriz3
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz3[i][j]=(pow (matriz1[i][j],2)+pow (matriz2[i][j],2));
		}
	}
	//mostrar matriz 3
	cout<<"Matriz 3\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz3[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
