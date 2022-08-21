/*existen 4 tipos de listas 
1. listas simplemente enlazadas
2. listas doblemente enlazadas 
3. listas circular simple enlazada 
4. listas circular doble enlazada */

//insertar elementos de una lista 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct nodo{
	int dato;
	nodo *sig;
};