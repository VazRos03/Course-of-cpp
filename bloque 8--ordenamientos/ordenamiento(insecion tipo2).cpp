/*en el ordenamiento por insercion seguimos la ley de 
num izq>numero actual
CAMBIO DE POSICION
en este metodo usamos tres variables
1.iterador
2.posicion
3.auxiliar
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={9,7,8,5,6};
	int i,pos,aux;
	
	for(int i=0;i<5;i++){
		pos=i; //este es para saber la posicion de los valores
		aux=numeros[i];
		//este es para saber el valor de cada posicion
		while((pos>0)&&(numeros[pos-1]>aux)){
			numeros[pos]=numeros[pos-1];
			//va a recorrer los valores hacia la izq+
			pos--;//va a decrementar de 1 en 1
		}
		numeros[pos]=aux;
	}
	cout<<"Orden ascendente\n";
	for(int i=0;i<5;i++)
	cout<<numeros[i];
	getch();
	return 0;
}
