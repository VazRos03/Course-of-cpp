/*paso de parametros de tipo vector*/
#include<iostream>
#include<conio.h>

using namespace std;

void cuadrado(int vec[]/*parametro del vector*/,int/*parametro del tamaño del vector*/);
void muestra (int vec[],int);

int main(){
	const int TAM =5;//debemos definir el tamaño del vector
	int vector[TAM]={1,2,3,4,5};
	//dentro de los corchetes, esta el rtamaño que va a tener el vector
	//en las llaves estan los elemntos que componen al vector
	
	cuadrado(vector,TAM);
	muestra(vector,TAM);
	
	getch();
	return 0;
}
/*es sumamente importante que al usar este tipo de paso de parametros
siempre debemos declarar en las funciones al vector y su tamaño*/
void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]*=vec[i];
		/*estamos elevamdo al cuadrado cada uno de los elementos del
		vector y los estamos guardando en el ietrador "i"*/
	}
}
void muestra (int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
