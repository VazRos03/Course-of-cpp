/*exprecion matematica f(x,y)= \/x /(y^2-1) */


#include<iostream>
#include<math.h>/*se usa para operaciones matematicas, libreria de funciones
trigonometricas y algebraicas*/
using namespace std;
int main(){
float x,y,resultado=0;

cout<<"digite el valor de x:";cin>>x;
cout<<"digite el valor de y:";cin>>y;

resultado=(sqrt(x))/(pow(y,2)-1);/*el "sqrt" es una funcion
de la libreria "math.h" que se usa para raices cuadradas y el "pow" es
tambien otra funcion de dicha libreria,escribimos las variables dentro 
de un parentesis y en el caso de "pow", ponemos la coma despues de la 
variables y escribimos el numero como exponente*/
cout.precision(2);
cout<<"RESULTADO:\n"<<resultado<<endl;

return 0;
}
