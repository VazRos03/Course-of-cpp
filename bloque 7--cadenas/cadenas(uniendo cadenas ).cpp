//añadir o concatenar una cadena con otro-funcion strcat()
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char cad1[]="Esto es una cadena";
	char cad2[]=" de ejemplo";
	char cad3[30];//cadena donde vamos  unir todo
	
	strcpy(cad3,cad1);//copiando cad1 a cad3
	
	strcat(cad3,cad2);//uniendo cad3 con cad2
	
	cout<<cad3<<endl; 
	system("pause");
	return 0;
}
