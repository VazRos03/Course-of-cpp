#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct nodo{
	char data;
	nodo *sig;	
};

void agregar( nodo *&pila, char n){
	nodo *papasito = new nodo;
	
	papasito->data = n;
	papasito->sig = pila; 
	
	pila = papasito; 
	
}

void quitar(nodo *&pila, char &n){
	nodo *aux = pila;
	n = aux->data;
	pila = aux->sig;
	delete aux;
}

int main(){
	nodo *pila = NULL;
	char dato;
	char rpt;
	
	do{
		cout<<"Ingrese una letra: "; 
		cin>>dato;
		agregar(pila,dato);
		
		cout<<"\nDesea agregar una letra?? (s/n): ";
		cin>>rpt;
	}while((rpt == 's')|| (rpt == 'S'));
	
	cout<<"Letras generadas en la pila: "; 
	while(pila != NULL){
		
		quitar(pila,dato);
		
		if (pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
		
		
	}
	getch();
	return 0;
}