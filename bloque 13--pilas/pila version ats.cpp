// Pilas
/*
una pila es una estructura de datos de entradas ordenadas tales que solo se 
pueden introducir y eliminar por un extremo, llamado cima, esto tiene 
la caracteristica de que el primer dato al ingresar, sera el ultimo en salir
y el ultimo dato en entrar, es el primero en salir.

Los operadores usuales en la pila son insertar y quitar. La operacion 
INSERTAR (push) añade un elemento en la cima t la operacion QUITAR (pop) 
elimina o saca un elemento de la pila

vamos a poner un ejemplo: digamos que en una pila queremos meter letra por letra la palabra MAC, entonces la primera letra en entrar es 
la letra M , despues la letra A y al final la letra C...cuando queremos retirar las palabras, no podemos sacar a la leta M primero, perimero 
seria la letra C, despues la letra A y al final la letra M.  

La estructura pila se conoce como LIFO (last-in, first-out, último en entrar, primero en salir)

cada elemento de una pila tiene esta estructura

dato (ya sea int, float o char)
*siguiente(el puntero que señala hacia abajo)

para agregar otra dato, se debe seguir la misma estructura, pero arriba del primero, luego el tercero arriba del segundo, y asi sucesivamente

practicamente es crear un nodo, que es una estructura con lo que ya habiamos mencionado
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct nodo{
	int data;
	nodo *sig;
};


//pasos para agregar datos a una pila
void agregar(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo();//creando y reservando nuevo nodo
	nuevo_nodo->data = n;//llenando el datro
	nuevo_nodo->sig = pila;//cargar el puntero pila dentro de puntero nodo (*sig)
	pila = nuevo_nodo;//asignar el nuevo nodo a la pila
	
	cout<<"\n Elemento "<<n<<"  agregado\n\n";
}

//pasos para quitar datos de una pila
void quitar(nodo *&pila, int &n){
	nodo *aux = pila; //crear una variable aux
	n = aux->data;
	pila = aux->sig;
	delete aux;
}

int main(){
	
	nodo *pila = NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	agregar(pila,dato);
	
	cout<<"Digite otro numero: ";
	cin>>dato;
	agregar(pila,dato);
	
	cout<<"\nSacando elementos de la pila: ";
	while(pila != NULL){
		
	    quitar(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
	    else{
			cout<<dato<<".";
		}
	}
	
	
	getch();
	return 0;
}