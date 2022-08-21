#include <iostream>

using namespace std;

int main(){
	int numero;//sirve para declarar la variable
	
	cout<<"digite un numero:\n";
	cin>>numero;//guarda la variable
	
	cout<<"\nElnumero que digito es:"<<numero;
	
	return 0;
}
/*
cuando queremos agregar algun numero flotante (decimales) el "int numero"
 lo cambiamos a "float numero"
si queremos poner un numero flotante y dejamos el "int numero"
 no saldra el numero decimal, sino saldra el numero que está antes
que el pubnto decimal y no saldra el numero posterior al punto decimal
*/
