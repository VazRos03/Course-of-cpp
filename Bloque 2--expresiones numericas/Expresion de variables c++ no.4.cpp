/*esta practica es el cambio de variables del segundo bloque, haciendo que el
valor de las variables cambie.*/

#include <iostream>
using  namespace std;
int main(){
	
	int x,y,aux;//el aux, es una auxiliar que ayuda en el cambio de variables
	
	cout<<"Digite el valor de x:";cin>>x;
	cout<<"Digite el valor de y:";cin>>y;
	
	aux=x;//el auxiliar tendra el valor de x
	x=y;//x tendra el valor de y
	y=aux;//y tendra el valor del auxiliar por lo que tendra el valor de x
	cout<<"\nEl nuevo valor de x es:"<<x<<endl;
	cout<<"\nEl nuevo valor de y es:"<<y<<endl;
	/*segun lo estudiado, con el auxiliar ayudara para el cambio de variables
	por lo que lo esperado es de que, el valor de X pase siendo Y y el valor de
	Y sea el valor de X*/
	
	return 0;
}
