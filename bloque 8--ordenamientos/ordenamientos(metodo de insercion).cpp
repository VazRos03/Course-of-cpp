/*metodo por insercion*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={5,2,3,4,1};
	int i,pos,aux;
	
	for(i=0;i<5;i++){
		pos=i;
		aux=numeros[i];
		
		while((pos>0)&&(numeros[pos-1]>aux)){
			numeros[pos]=numeros[pos-1];
			pos--;
		}
		numeros[pos]=aux;
	}
	cout<<"Orden ascendente:";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	/*&& significa and o y en c++, 
	y || significa or u o tambien en c++ 
	y son expresiones logicas  para valores booleanos */
	getch();
	return 0;
}
