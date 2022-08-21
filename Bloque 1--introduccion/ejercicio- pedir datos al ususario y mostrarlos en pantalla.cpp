/*realice un programa que lea de la entrada estandar los siguientes datos 
de una persona:

edad: dato de tipo entero
sexo: dato de tipo caracter
estatura: dato de tipo real

tras leer los datos, el programa debe mostrarlos en la salida estandra*/

#include <iostream>

using namespace std;

int main(){
	int edad;//entero
	char sexo[10];//caracter
	float altura;//decimal o real 
	
	cout<<"escriba su edad:\n";  cin>>edad;
	cout<<"digite su sexo:\n"; cin>>sexo;
	cout<<"digite su estatura:\n"; cin>>altura;
	
	cout<<"\nEdad:"<<edad<<endl;
	cout<<"\nSexo:"<<sexo<<endl;
	cout<<"\nAltura:"<<altura<<endl;
	return 0;
}
