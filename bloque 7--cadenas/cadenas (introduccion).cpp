//cadenas de caracteres
#include<iostream>
#include<conio.h>
#include<string.h>//biblioteca para las cadenas de caracteres
using namespace std;
int main(){
	//diferente manera, mismo resultado
	char palabra[]="Arturo";
	char palabra2[]={'A','r','t','u','r','o'};
	/*dentro de los corchetes pondremos
	la cantidad de elementos que habra en nuestra cadena
	si no establecemos la cadena como en este ejemplo*/
	char palabra3[20];
	
	cout<<"Digite su nombre: ";
	cin.getline(palabra3,20,'\n');
	/*no podemos usar el 'cin'por que es muy limitado
	y tampoco getch()porque se puede rovbar memoria 
	que no le pertenece
	estructura de getch:
	cout<<"Digite su nombre: ";
	getch(palabra3);
	la mejor forma es con el cin.getline(), el cual
	tiene 3 parametros, el primero es el nombre de la variable
	el segundo es la cantidad o limite de caracteres y el
	ultimo es el salto de linea para terminar el programa*/
	
	
	cout<<palabra3<<endl;
	
	
	getch();
	return 0;
}
