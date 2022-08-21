/*aqui en esta parte veremos los condicionales multiples*/
/*veremos acerca de la sentencia Switch,
 son una estructura de control condicional, que permite definir múltiples casos 
 que puede llegar a cumplir una variable cualquiera, y qué acción tomar en 
 cualquiera de estas situaciones, incluso es posible determinar qué acción 
 llevar a cabo en caso de no cumplir ninguna de las condiciones*/
#include <iostream>

using namespace std;

int main(){
int numero;
cout<<"Digite un numero del 1-5:\n"; cin>>numero;

switch(numero){
 case 1: cout<<"Te debo unas caguamas";break;
 case 2: cout<<"Te debo una pizza ";break;
 case 3: cout<<"Te debo una salida al cine";break;
 case 4: cout<<"Te debo unos tacos ";break;
 case 5: cout<<"Te debo un refresco";break;
 default: cout<<"No te debo nada porque no esta en el rango";
}
return 0;
}
/*En la estructura de switch es la siguiente
switch(condicional){

case n: cout<<condicion;break; (siempre poner break despues de la condicion)
case n: cout<<condicion;break;
case n: cout<<condicion;break;
default: cout<<condicion no aceptada 
(el "default"sirve para lanzar un resultado que no es aceptado
enviandote un mensaje de que fue rechazado la variable solicitada)

}
*/
