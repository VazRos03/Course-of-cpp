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
#include<conio.h>
#include<stack>

using namespace std;

stack <int> pila;
int mayor ;

int main(){
	
	pila.push(30);
	pila.push(10);
	pila.push(25);
	pila.push(17);
	pila.push(67);
	
	//la funcion size se encarga de darte el valor de elementos que hay en tu pila, en este caso le estamos diciendo al ciclo while
	//que mientras el tamaño de la pila sea mayor a 0, se va a llevar acabo
	
	cout<<"PILA\n";
	while(pila.size()>0){
	
	cout<<pila.top()<<endl;
	//la funcion top se ecnarga de visualizar un elemento de nuestra pila
	pila.pop();//la funcion pop sirve para eliminar los datos de la pila
}


    cout<<"\nMaximo valor de la pila\n";
    
    while(pila.size()>0){
    	if(pila.top()>mayor){
    		
    		mayor = pila.top();
		}
    	pila.pop();
	}
	cout<<"Valor maximo: "<<mayor<<endl;


	
	return 0;
}


