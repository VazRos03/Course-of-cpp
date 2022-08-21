//transformar una cadena a numeros-funcon atoi(enteros) y atof(flotantes)
#include<iostream>
#include<conio.h>
#include<stdlib.h>
//estas funciones solo sirven con esta libreria
using namespace std;
int main(){
	char cad[]="123";
	int numeros;
	
	numeros=atoi(cad);
	
	cout<<numeros<<endl;
	
	/*numeros flotantes        
	char cad[]="123.675";
	float numeros;
	
	numeros=atof(cad);
	
	cout<<numeros<<endl;
	*/
	
	/*numeros enteros
		char cad[]="123";
	int numeros;
	
	numeros=atoi(cad);
	
	cout<<numeros<<endl;*/
	getch();
	return 0;
}
