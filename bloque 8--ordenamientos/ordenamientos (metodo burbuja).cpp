//metodo burbuja
#include <iostream>
#include<conio.h>

using namespace std;
int main(){
	int numeros[]={5,4,6,7,8,1,2,3};
	int i,j,aux;
	
	//algoritmo del ordenamiento
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(numeros[j]>numeros[j+1]){
			aux=numeros[j];
			numeros[j]=numeros[j+1];
			numeros[j+1]=aux;
			}
		}
	}
	
	//imprimir el orden
	cout<<"Orden Ascendente";
	for(int i=0;i<8;i++){
		cout<<numeros[i];
	}
	 
	
	getch();
	return 0;
}
