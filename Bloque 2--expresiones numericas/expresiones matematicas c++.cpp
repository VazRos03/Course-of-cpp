/*lo siguiente que vamos a realizar es la epresion matematica en c++*/
//la expresion matematica solicitada es a/b+1
#include<iostream>
using namespace std;

int main(){
	float a,b, resultado=0;//declaracion de las variables con numero flotante(decimal)
	
	cout<<"Digite el valor de a:\n";cin>>a;
	cout<<"digite el valor de b:\n";cin>>b;
	
	resultado= (a/b)+1;
	
	cout.precision(2);/*este es para cuando los resultados son en decimales,el 
	número que esta dentro del parentesis son la cantidad de numero que iran
	despues del punto decimal, tambien redondeando el resultado*/
	cout<<"\nEl resultado es:"<<resultado<<endl;
	return 0;
}
