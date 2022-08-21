#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int dato;
	nodo *sig;
};

void agregar( nodo *&pila, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->sig = pila;
	pila = nuevo_nodo;
	
	cout<<"\nElemento: "<<n<<" agregado";
}

void quitar( nodo *&pila, int &n){
	nodo *aux = pila;
	n = aux->dato;
	pila = aux->sig;
	delete aux;
}


int main(){
	
	nodo *pila = NULL;
	
	int dato;
	char rpt;
	
	do{
		cout<<"Digite un elemento: "; cin>>dato;
		agregar(pila,dato);
		cout<<"\nQuieres agregar un elemento(s/n): "; cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	while(pila != NULL){
		quitar(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" .";
		}
	}
	
	getch();
	return 0;
}