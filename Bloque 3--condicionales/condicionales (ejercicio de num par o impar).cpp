#include<iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Digite un numero:\n";cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"el numero es impar";
	}
	return 0;
}
/*en la condicion "if" si ponemos el"%"y despues el numero 
eso nos lanzara el resultado dependiendo del dato solicitado,
sin olvidar que debemos poner los dos == y el 0*/
