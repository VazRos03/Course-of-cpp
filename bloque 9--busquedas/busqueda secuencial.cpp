//busqueda secuencial
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a[]={3,4,2,1,5};
	int i,dato;
	char band='f';
	
	dato=4;
	//declarando el valor del arreglo qque queremos buscar
	
	// algoritmo busqueda secuencial
	i=0;
	while((band=='f')&&(i<5)){
		if(a[i]==dato){
			band='v';
		}
		i++;
	}
	
	if(band=='f'){
		cout<<"El numero no existe en el arreglo"<<endl;
	}
	else if(band=='v'){
		cout<<"El numero a sido encontrado en la posicion"<<i-1<<endl;
	}
	
	getch();
	return 0;
}
