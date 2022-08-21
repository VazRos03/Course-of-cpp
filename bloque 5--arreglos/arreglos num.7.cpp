/*Diseña un programa que lea un vector de 5 numeros,
que los copie a otro vector multiplicados por 2 y 
muestre el segundo arreglo*/

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros1[5]={1,2,3,4,5};
	int numeros2[5];
	
	for(int i=0;i<5;i++){
		numeros2[i]=(numeros1[i]*2);//multiplicando *2 el vector
	}
	for(int i=0;i<5;i++){
	cout<<numeros2[i]<<endl;
		
	}
	getch();
	return 0;
}
