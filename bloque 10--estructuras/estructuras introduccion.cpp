//estrucutras basicas 
#include<iostream>
#include<conio.h>
using namespace std;

//estrucutra con las variables declaradas
struct persona{
	char nombre[20];
	int edad;	
}persona1;

//usando los atos de la estructura
int main(){
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\nImprimeindo datos\n ";
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	getch();
	return 0;
}

//estrucutra cuando conocemos los datos 
/*#include<iostream>
#include<conio.h>
using namespace std;

struct persona{
	char nombre[20];
	int edad;	
}
persona1={"Arturo",17},
persona2={"Alejandro",24};

int main(){
	cout<<"nombre 1: "<<persona1.nombre;
	cout<<"Edad 1: "<<persona1.edad;
	
	cout<<"\nNombre 2: "<<persona2.nombre;
	cout<<"Edad: "<<persona2,edad;
	getch();
	return 0;
}
*/
