/*
En esta nueva practica vamos a ver lo de hacer operaciones algebraicas 
en c++


*/
#include<iostream>

using namespace std;

int main(){
	
	int n1,n2, suma = 0, resta= 0, multiplicacion= 0, division= 0;
	/*si queremos varias interacciones en una sola linea
	  solo basta con separarla con "," y al final agregamos 
	  ";"
	*/
	cout<<"digite una numero:\n"; cin>>n1;
	cout<<"Digite otro numero:\n"; cin>>n2;
	
	suma = n1+n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	//operaciones para sacar el resulrtado de los digitos solicitados
	cout<<"\nLa suma es:"<<suma<<endl;
	cout<<"\nLa resta es:"<<resta<<endl;
	cout<<"\nLa multiplicacion es:"<<multiplicacion<<endl;
	cout<<"\nLa division es:"<<division<<endl;
	//resultados dependiendo de lo solicitado
	return 0;
} 
