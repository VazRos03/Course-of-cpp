//copiar contenido de una cadena a otra

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char palabra[]="Artruo";
	char palabra2[20];
	
	strcpy(palabra2,palabra);
	//ponemos primero la segunda variables y despues la primera
	
	cout<<palabra2<<endl
	getch();
	return 0;
}
