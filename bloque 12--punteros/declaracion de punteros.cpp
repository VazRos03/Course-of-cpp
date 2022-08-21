//punteros

/* &n = la direccion donde se esta guardando la variable n
   *n = la variable cuya direccion esta almacenada en  n  */
   
   
   /*debemos definir que un puntero es una variable que va a almacenar la direccion de memoria */
   
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,*dir_num;
	num = 20;
	dir_num=&num;
	
	cout<<"Valor del numero: "<<*dir_num<<endl; //el puntero nos imprime el valor de numero porque el puntero es igual a la direccion de num
	cout<<"Direccion de memoria de numero: "<<dir_num<<endl;//imprime la direccion en donde se esta guardando num
	
	getch();
	return 0;
}
/*	

int desicion;
//condicional para seguir jugando 
	  	if(monedas>=100){
		  gotoxy(39,20);printf("¿Quieres seguir jugando?");
		  gotoxy(40,21);printf("Elige un numero");
		  gotoxy(40,22);printf("Precio: 100 monedas");
		  gotoxy(40,23);printf("Opciones: 1.Yes    2. No");
		  gotoxy(40,24);printf("Desicion: ");
		  scanf("%d",&desicion);
		  switch(desicion){
		  	case 1: 
		  	   monedas-=100;
		  	    Tac_over;
		  	break;
		  	case 2: 
		  	 gotoxy(40,26);printf("Gracias por jugar\n");break;
		  }
		}*/