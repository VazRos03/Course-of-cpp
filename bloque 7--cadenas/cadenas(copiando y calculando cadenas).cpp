/*diseña un programa donde pidas una 
cadena de caracteres y depsues copiarlo a otra cadena */
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[30];
	char nombre2[30];
	int longuitud=0;
	
	cout<<"digite un caracter: ";
	cin.getline(nombre,30,'\n');
	
	strcpy(nombre2,nombre);//copiando de una cadena a otra
	
	longuitud=strlen(nombre2);
	//calculando numero de elemntos de una cadena
	
	cout<<nombre2<<endl;
	cout<<"numero de elementos: "<<longuitud<<endl;
	getch();
	return 0;
}
