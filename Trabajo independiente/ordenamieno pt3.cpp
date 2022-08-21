//practica de ordenamiento
#include<iostream>
#include<conio.h>
 using namespace std;
 int main(){
 	int numero[]={2,4,6,8,1,3,5,7,9};
 	int i,j,aux,min;
 	
 	//algoritmo
 	for(i=0;i<9;i++){
	 min=i;
 		for(j=i+1;j<9;j++){
 			if(numero[j]<numero[min]){
 				min=j;
			 }
		 }
 		aux=numero[i];
 		numero[i]=numero[min];
 		numero[min]=aux;
	 }
 	
 	//imprimiendo
 	
 	cout<<"Orden ascendente: ";
 		for(i=0;i<9;i++){
 			cout<<numero[i]<<" ";	
		 }
 	
 	
 	
 	
 	
  getch();
  return 0;
 }
