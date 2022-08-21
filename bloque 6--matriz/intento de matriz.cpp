#include<iostream>
#include<fstream>

using namespace std;

int main(){
	int matriz[20] [20];
	int n,m;
	
	cout<<"Digite el numero de filas: ";cin>>n;
	cout<<"Digite el numero de columnas: ";cin>>m;
	
	//creando matriz
	cout<<"\nMATRIZ\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];
		}
	}
	
	cout<<"Matriz solicitada\n";
	//mostrando matriz
	for(int i=0;i<n;i++){
		for(int j=0; j<m;j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\nmatriz traspuesta\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			cout<<matriz[j][i];
			
		}
		cout<<"\n";
	}
	return 0;
}