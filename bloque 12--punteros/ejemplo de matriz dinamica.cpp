#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int **matriz,nfil,ncol;

void pedir(){
	cout<<"\t\tMATRIZ\n";
	cout<<"\tDigite el numero de filas: ";cin>>nfil;
	cout<<"\tDigite el numero de columnas: ";cin>>ncol;
	
	matriz = new int *[nfil];
	
	for(int i=0; i<nfil; i++){
		matriz[i] = new int [ncol];
	}
	cout<<"\n\t\tCREANDO MATRIZ\n";
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			cout<<"\tDigite un numero["<<i<<"] ["<<j<<"]: ";
			cin>>*(*(matriz+i)+j);
		}
	}
}

void mostrar(){
	cout<<"\n\t IMPRIMIENDO MATRIZ\n";
	for(int i=0; i<nfil; i++){
		cout<<"\t";
		for(int j=0; j<ncol; j++){
			cout<< *(*(matriz+i)+j);
		}
		cout<<"\n";
	}
	
}

int main(){
	
	pedir();
	mostrar();
	
	if(nfil==ncol){
		cout<<"\n\tTu matriz es simetrica =)";
	}
	else{
		cout<<"\n\tTu matriz es asimetrica =(";
	}
	
	getch();
	return 0;
}