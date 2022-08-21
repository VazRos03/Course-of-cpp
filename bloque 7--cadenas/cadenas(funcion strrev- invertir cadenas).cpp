//onvertir una cadena - funcion strrev()
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){

char cad[30];
char cad2[30];
int longuitud;


cout<<"Escriba una palabra u oracion: ";
cin.getline(cad,30,'\n');
strcpy(cad2,cad);//copiando cadena
cout<<"Cadena invertida:\n";
strrev(cad2);//inviertiendo cadena
cout<<cad2<<endl;
cout<<"Numero de elementos de la cadena: ";
longuitud=strlen(cad2);
cout<<longuitud<<endl;
getch();
return 0;
}
