/*la sentencia for
  
  for(exp1;expresion logica;exp2){
  
        conjunto de instrucciones
}
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	/*a diferencia del while y do while, la sentencia
	 for permite declarar la variable dentro de su 
	 estructura y antes de su esructura, a diferencia de 
	 while y do while que debe ser antes de la estructura */
	for(int i=10; i>=1;i--){
		cout<<i<<endl;
	}
	getch();
	return 0;
}
