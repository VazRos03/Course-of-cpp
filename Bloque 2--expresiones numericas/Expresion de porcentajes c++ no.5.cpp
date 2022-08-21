/*La calificacion final de un alumnoes la media ponderada de tres notas:
la nota de practicas que tiene un valor de 30% del total,La nota teorica
que cuenta con un 60% y la nota de participación que cuenta en el 10%
restante, diseñe un programa que lea de la entrada de las tres notas
de un alumno y escriba en la salida estandar su nota final.*/


#include<iostream>
using namespace std;
int main(){
	float practica,teorica,participacion,nota_final=0;
	
	cout<<"Digite el valor de la nota de practica:";cin>>practica;
	cout<<"Digite el valor de la nota teorica:";cin>>teorica;
	cout<<"Digite el valor de la nota de Participacion:";cin>>participacion;
	
	practica*=0.30;/*esta forma de escribir es la misma que 
	                    practica=practica*0.30; solo que hace mas facil y 
					    corto el codigo*/
	teorica*=0.60;
	participacion*=0.10;
	
	nota_final=practica+teorica+participacion;
	cout<<"\nLa nota final del estudiante es:"<<nota_final;
	return 0;
}
