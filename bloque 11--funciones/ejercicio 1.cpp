#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de funcion
void pedirdatos();
void mult(float x, float y);

float num1,num2;//variables goblales

int main(){
	pedirdatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite dos numeros: ";
	cin>>num1>>num2;	
}

void mult(float x,float y){
	float multiplicacion=x*y;
	
	cout<<"Resultado: "<<multiplicacion<<endl;
}
