/*vamos a calcular la longitud de una cadena
y vamos a usar la funcion strlen()que nos dice cuantos
elementos tiene nuestra cadena de caracteres*/

#include<iostream>
#include<conio.h>
#include<string.h>//libreria para los caracteres
using namespace std;
int main(){
	char palabra[20];
	int longuitud=0;
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra,20,'\n');
	
	longuitud=strlen(palabra);
	
	cout<<"Numero de elementos de la cadena:  "<<longuitud<<endl;
	getch();
	return 0;
}
