#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
	char num[60];
	char num2[60];
	int numeros;
	float numeros2;
	int suma=0;
	
	cout<<"\tCadenas numericas\n";
	cout<<"Digite una cadena de numeros enteros: ";
	cin.getline(num,60,'\n');
	cout<<"Digite una cadena de numeros reales: ";
	cin.getline(num2,60,'\n');
	
	cout<<"\tSuma de las cadenas\n";
	numeros=atoi(num);
	numeros2=atof(num2);
	
	cout<<"Cadena de numros enteros:\n";
	cout<<numeros<<endl;
	
	cout<<"Cadena de numeros reales:\n";
	cout<<numeros2<<endl;
	
	suma=numeros+numeros2;
	cout<<"Suma: "<<suma<<endl;
	
	
	getch ();
	return 0;
}
