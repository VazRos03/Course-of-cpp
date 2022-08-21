/*punteros de arrays */

#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros = numeros; 
	/*para arrays, no es necesario el signo de & y *, ya que esto es para hacer más facil el proceso a la computadora*/
	
	for( int i =0; i<5; i++){
	cout<<"\nNumero ["<<i<<"]: "<<*dir_numeros<<endl;//imprimira el numero
	cout<<"\nPosicion de memoria de cada numero del array ["<<i<<"]: "<<dir_numeros++<<endl;//direccion del numero
	}
	getch();
	return 0;
}
