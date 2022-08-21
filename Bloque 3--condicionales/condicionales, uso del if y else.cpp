/*este es el bloque no.3, aqui comezaremos a ver condicionales, donde usaremos la
funcion "if" y el objetivo de esta funcion es de que no saldra todo el diseño,
sino saldra el resultado que nosostros especifiquemos.*/

#include<iostream>
using namespace std;

int main(){
int numero, dato= 5;
	cout<<"Digite un numero:";cin>>numero;
	/*aqui debemos poner doble == para declarar 
	que la variable declarada sea comprobada, con un =
	estas asignando el valor pero con dos = estas comprobando*/
	if(numero==dato){
		/*si ponemos != la cosa cambia porque practicamente se lee
		"es diferente a" por lo que los resultados cambian.*/
		cout<<"no es 5";
	}
	
	else{
		
	cout<<"el numero es 5";
	}
	
	return 0;
}
/*si ponemor los signos de < (menor a) o >(mayor a) tambien cambia el resultado
y lo mismo con <= o >=*/
