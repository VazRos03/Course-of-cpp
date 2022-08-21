//Punteros a Estructura

#include<iostream>
#include<conio.h>

using namespace std;

//estructura con ppunteros
struct persona{
	char nombre[30];
	int edad;
	
}persona1, *puntero = &persona1; //el puntero esta igualado a la direccion de memoria de la variable persona

//funcion void para pedir datos con punteros
void datos(){
	cout<<"REGISTRO DE USUARIO\n";
	cout<<"Digite su nombre: ";
	cin.getline(puntero->nombre,30,'\n');// esto es igual a cin.getline(persona1.nombre,30,'\n') pero con punteros 
	cout<<"Edad: ";
	cin>>puntero->edad;//esto es igual a cin>>persona1.edad pero con punteros
}

//funcion para mostrar datos con punteros
//para mostrar datos con punteros, en la funcion debemos poner como parametro el nombre de la estructura y despues el puntero con su nombre
void mostrar(persona *puntero){
	cout<<"\nDATOS DE USUARIO\n";
	cout<<"Nombre del usuario: "<<puntero->nombre<<endl;
	cout<<"Edad del usuario: "<<puntero->edad<<" anios"<<endl;
}

int main (){
	//llamando funciones
	
	datos();
	mostrar(puntero);//cuando llamamos a la funcion con parametros, solo punemos el nombre del puntero sin * 
	
	getch();
	return 0;
}