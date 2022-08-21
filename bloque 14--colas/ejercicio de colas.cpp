//ejercicio de colas --> crear una cola donde pueda ingresar un caracter en la cola

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct nodo{
	int data;
	nodo *sig;	
};

//funcion para determinar si la cola esta vacia 
bool cola_vacia(nodo *frente){
	return (frente == NULL)? true : false;
}
//funcion para agregar elementos a una cola
void agregar(nodo *&frente, nodo *&fin, char n){
	nodo *nuevo = new nodo;
	
	nuevo->data = n;
	nuevo->sig = NULL;
	
	if (cola_vacia(frente)){
		frente = nuevo;
	}
	else{
		fin->sig = nuevo;
	}
	fin = nuevo;
	
}

//funcion para eliminar elementos de la cola
void suprimir(nodo *&frente, nodo *&fin, char &n){
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

void menu(){
	int opc;
	char dato;
	
	nodo *frente = NULL;
	nodo *fin = NULL;
	
	do{
		cout<<"\t MENU \n";
		cout<<"1. Insertar elementos"<<endl;
		cout<<"2. Mostrar elementos"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		switch(opc){
			case 1: cout<<"\nIngrese el caracter deseado: ";
			     	cin>>dato;
			     	agregar(frente,fin,dato);
			     	break;
			case 2: cout<<"\n Mostrando elementos de la cola: "; 
					while (frente != NULL){
						suprimir(frente,fin,dato);
						if (frente != NULL){
							cout<<dato<<" , ";
						}
						else{
							cout<<dato<<".";
						}
					}
					system("pause");
					break;
					
			case 3:break;
		}
		system("cls");//limpia toda la pantallla
	}while(opc != 3);
}

int main(){
	
	menu();
	
	getch();
	return 0;
}
