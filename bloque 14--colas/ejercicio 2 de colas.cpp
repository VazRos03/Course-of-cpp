//practica de colas

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int data;
	nodo *sig;
};


bool perreador(nodo *frente){
	return(frente == NULL)? true : false;
}


void agregar(nodo *&frente, nodo *&fin, int n){
	nodo *nuevo = new nodo;
	
	nuevo->data = n;
	nuevo->sig = NULL;
	
	if(perreador(frente)){
		frente = nuevo;
	}
	else{
		fin->sig = nuevo;
	}
	
	fin = nuevo;
}


void retirar(nodo *&frente, nodo *&fin, int &n){
	n = frente->data;
	nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->sig;
	}
	
	delete aux;
}


int main(){
	nodo *frente = NULL;
	nodo *fin = NULL;
	
	int dato;
	char rpt;
	
	do{
		cout<<"Digite un numero: "; cin>>dato; 
		agregar(frente,fin,dato);
		
		cout<<"\nDesea agregar un nuevo elemento a la cola?(s/n):  "; 
		cin>>rpt;
		
	}while((rpt == 's')||(rpt == 'S'));
	
	
	cout<<"\nElementos de la cola desarrollada: ";
	while(frente != NULL){
		retirar(frente,fin,dato);
		
		if ( frente != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	
	getch();
	return 0;
}

