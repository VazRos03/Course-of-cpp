#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	char palabras[]="Hola que tal ";
	char palabras2[40];
	
	cout<<"Ingrese su nombre:";cin.getline(palabras2,40,'\n');
	cout<<"\n";
	strcat(palabras,palabras2);
	cout<<palabras<<endl;
	cout<<"EXtrañas a Valeria, yo lo se :c"<<endl;
	
	getch();
	return 0;
}
