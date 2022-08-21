/*segundo ejericicio, vamos a la suma 
de los cuadrados de los primeros 10 digitos*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int suma=0,cuadrado;
	
	for(int i=1;i<=20;i++){
		cuadrado=i*i;
		suma+=cuadrado;//suma=suma+cuadrado
	}
	cout<<"Resultado:\n"<<suma<<endl;
	
	
	getch();
	return 0;
}
