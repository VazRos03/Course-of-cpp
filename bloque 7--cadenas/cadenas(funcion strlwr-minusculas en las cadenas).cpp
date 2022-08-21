//hacer minusculas las cadens-funcion strlwr()
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char cad[]="HOLA MARTINA ";
	char cad2[]=", COMO HAS ESTADO?";
	char cad3[30];
	
	strcpy(cad3,cad);
	strcat(cad3,cad2);
	strlwr(cad3);
	
	cout<<cad3<<endl;
	
	getch();
	return 0;
}
