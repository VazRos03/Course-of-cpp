/*Hacer una estructura llamada alumno,
en la cual se tendrán los siguientes Campos: 
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y 
posteriormente imprimir los datos del alumno.*/
#include<iostream>
#include<conio.h>
using namespace std;
struct alumnos{
	char nombre[30];
	int edad;
	double promedio;
}alumno[3];
int main(){
	int mayor=0; int pos=0;
	//pedir datos al estudiante;
	for(int i=0;i<3;i++){
	fflush(stdin);
	cout<<"Nombre del alumno: ";
	cin.getline(alumno[i].nombre,30,'\n');
	cout<<"Edad del alumno: ";
	cin>>alumno[i].edad;
	cout<<"Promedio del alumno: ";
	cin>>alumno[i].promedio;
	cout<<"\n";
	}
	
	//algoritmo para medir el mejor promedio
	for(int i=0;i<3;i++){
	
	if(alumno[i].promedio>mayor){
		mayor=alumno[i].promedio;
		pos=i;
	}
	cout<<"\n";
}
	//imprimiendo datos

	cout<<"\tAlumno con mejor promedio\n";
	cout<<"Nombre: "<<alumno[pos].nombre<<endl;
	cout<<"Edad: "<<alumno[pos].edad<<endl;
	cout<<"Promedio: "<<alumno[pos].promedio<<endl;
	getch();
	return 0;
}
