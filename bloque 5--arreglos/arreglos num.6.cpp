//vamos a unir dos vectores en un vector
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char letras1[5]={'a','b','c','d','e'};
	char letras2[5]={'f','g','h','i','j'};
	char letras3[10];
	
	//copiando el primer vector en el tercer vector
	for(int i=0;i<5;i++){
		letras3[i]=letras1[i];
	}
	//copiando elsegundo vector en el tercer vector
	for(int i=5;i<10;i++){
		letras3[i]= letras2[i-5];
		//debemos restarle los elementos anteriores
	}
	//proceder a mostrar el nuevo arreglo
	for(int i=0;i<10;i++){
		cout<<letras3[i]<<endl;
	}
	getch();
	return 0;
}
