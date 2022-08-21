//ejemplo de arreglo dinamico 
/*ejercicio, crear un array dinamico y sumar todos los valores que sean introducidos*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//variable global
int valor, suma =0, *valor2;

void pedirvalores(){
	cout<<"Digite la cantidad de valores en el arreglo ";
	cin>>valor;
	
	valor2 = new int [valor];
	
	for(int i=0; i<valor; i++){
		cout<<"Digite un valor: ";cin>>valor2[i];
	}
	
}

void sum(){
	for(int i=0; i<valor; i++){
		suma += valor2[i];
	}
	
	cout<<"Resultado: "<<suma;
}


int main(){
	
	pedirvalores();
	sum();
	
	delete[] valor2;
	
	return 0;
	getch();
}
