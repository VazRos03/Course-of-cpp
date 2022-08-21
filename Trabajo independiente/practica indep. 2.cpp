/*practica para ordenamientos y busquedas*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char a[100];//cadena, no arreglo
	int b[100];//arreglo
	int n,i,j,aux,longuitud=0,min;
	
	cout<<"\tCadena\n";
	cout<<"Digite una oracion: ";cin.getline(a,100,'\n');
	
	longuitud=strlen(a);
	cout<<"Cantidad de elementos de la cadena: "<<longuitud<<endl;
	cout<<"\n";
	cout<<"\tArreglos";
	cout<<"\nDel valor de los elementos,\n";
	cout<<"digite un vector entre 1-15 de forma desordenada dependiendo\n";
	cout<<"la cantidad de elementos\n";
	cout<<"Numero de elementos en el vector: ";
	cin>>n;
	//creando vector
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>b[i];
	}
	//mostrando vector
	for(int i=0;i<n;i++){
		cout<<i<<"-->"<<b[i]<<endl;
	}
	
	//ordenamiento del arreglo
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
