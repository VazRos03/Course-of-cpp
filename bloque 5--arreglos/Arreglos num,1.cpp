/*Estamos iniciando en la parte de vectores o arreglos
donde vamos a utilizar mucho los ciclos o bucles for.*/

#include<iostream>
#include<conio.h>
//recordemos que conio.h sirve para while y for
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5,6,7,8,9,10};
	//n-1, 5 numeors, 4 lugares, iniciamos desde 0 
	int suma=0;
	/*en la funcion for, vamos a iniciar desde 0,normalmente
	 en for iniciamos con el num. 1 pero cuando se trata 
	 de Arry o arreglos, iniciamos desde 0.*/
	for(int i=0;i<10;i++){
		suma+=numeros[i];	
	}
	cout<<"la suma del vector es:"<<suma<<endl;
	
	getch();
	return 0;
}
