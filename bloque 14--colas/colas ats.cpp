//colas
/*
una cola es una estrcuura de datos, caracterizada por ser una secuencia de elementos en la que la operacion
 de insercion se realiza por un elemento y la extraccion por el otro, tiene la estructura FIFO (first input first output)
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
	int data;
	nodo *sig;
};

//funcion para determinar si la cola esta vacia
bool cola_vacia(nodo*frente){
	return ( frente == NULL)? true : false; //es como un condicional
	//le estamos preguntando a c++ si frente es igual a NULL, eb caso de que si lo que debe regresar true 
	//y : significa else que deberia dar false, es lo mismo que el siguiente condicional
	/*
	if (frente == NULL){
		return true;
	}
	else{
		return false;
	}*/
}

//funcion para agregar elementos 
void agregar(nodo *&frente, nodo *&fin, int n){
	nodo *nuevo = new nodo();
	nuevo->data = n;
	nuevo->sig = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo;
	}
	else{
		fin->sig = nuevo;
	}
	fin = nuevo;
	cout<<"Elemento "<<n<<" agregado\n";
}

//funcion para eliminar elementos de la cola
void eliminar(nodo *&frente, nodo *&fin, int &n){
	n = frente->data;
	nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin == NULL;
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
	
	for(int i=0; i<3; i++){
	
	cout<<"Digite un numero: "; 
	cin>>dato;
	agregar(frente,fin,dato);
}
	//eliminando elementos 
	cout<<"\n Quitando los elementos de la cola: ";
	while(frente != NULL){
		eliminar(frente,fin,dato);
		
		if(frente != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	 
	getch();
	return 0;
}