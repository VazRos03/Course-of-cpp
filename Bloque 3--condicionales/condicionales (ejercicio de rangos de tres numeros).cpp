/*Escriba un programa que lea de la entrada estandar tres numeros.Después
debe leer un cuarto numero e indicar si el numero esta dentro del rango*/
#include <iostream>
using namespace std;

int main(){
	int rango;
	
	cout<<"digite un numero:\n";
	cin>>rango;
	
	if((rango>=5)&&(rango==10)&&(rango<=15)){
		
	cout<<"El numero esta dentro del rango";
	}
	else{
		cout<<"El numero esta fuera del rango";
	}
	return 0;
}
