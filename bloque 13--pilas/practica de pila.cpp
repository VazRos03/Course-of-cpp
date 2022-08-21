#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//estructura del nodo
struct nodo{
	int data;
	nodo *siguiente; 
};
//funcion para agregar elementos a la pila
void agregar( nodo *&pila, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->data = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"Elemento "<<n<<" agregado\n";
}
//funcion para quitar elementos de la pila
void quitar(nodo *&pila, int &n){
	nodo *aux = pila;
	n = aux->data;
	pila = aux->siguiente;
	delete aux;
}


int main(){
	
	nodo *pila = NULL;
	int dato;
	char rpt; 
	
	cout<<"CREACION DE PILA \n";
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregar(pila,dato);
		cout<<"Quieres agregar un elemento mas (s/n): ";
		cin>>rpt;	
	}while((rpt=='S')||(rpt=='s'));
	
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