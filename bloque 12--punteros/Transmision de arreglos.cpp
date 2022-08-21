//transmision de arreglos

#include<iostream>
#include<conio.h>

using namespace std;

//funcion para encontrar el maximo elemento del arreglo
int hallar(int *dirvec,int nElementos){
	int max = 0;
	
	//ciclo para que avance el algoritmo
	for(int i =0; i<nElementos; i++){
		//condicional anidado para encontrar el maximo elemento
		if(*(dirvec+i)>max){
			max = *(dirvec+i);
		}
	}
    return max;
}
int main(){
	//variable constante de los numeros de elementos de un arreglo
	const int nElementos = 5;
	
	int num[nElementos] = {3,5,2,8,1};
	
	
	cout<<"Elemento con mayor valor: "<<hallar(num,nElementos);
	/*recordemos que cuando ponemos los parametros de una funcion dentro de otra funcion
	 simplemente ponemos las vaiables que queremos en las posiciones donde 
	 van los parametros, en este caso, el puntero *dirvec, dentro de int main
	 ira el arreglo num, donde estramos dando la direccion de memoria */
	
	getch();
	return 0;
}