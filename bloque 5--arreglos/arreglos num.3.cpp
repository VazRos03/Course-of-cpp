#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numeros[50],n;
	cout<<"Digite la cantidad de valores en el arreglo:\n";cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];//guardado todos los valores del arreglo
	}
	
	//mostraremos los elementos, y vamos a usar el ciclo for
	
	for(int i=0;i<n;i++){
		cout<<i<<"-->"<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
