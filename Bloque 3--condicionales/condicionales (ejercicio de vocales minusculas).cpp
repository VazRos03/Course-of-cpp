/*EScriba un codigo que determine si un caracter está escrito
en minuscula o no*/
#include<iostream>
using namespace std;

int main(){
	char caracter;
	cout<<"Escriba una vocal minuscula:\n";cin>>caracter;
	
	switch(caracter){
    case 'a':/*no tenemos que poner su condicion y su break porque tienen el
	 mismo final, si tuvieran diferente final, cada quien lo necesitaria*/	
	case 'e':	
	case 'i':
	case 'o':
	case 'u':cout<<"ES una vocal minuscula";break;
	default:cout<<"No es una vocal minuscula :(";	
	}
	
	return 0;
}/*En los "case" queremos puner una letra como condición
 debemos agregar laa comillas simples, a diferencia de los numeros que no 
 llevan.*/
