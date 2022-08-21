/*en esta parte ahora veremos ciclos y bucles
donde vamos a utilizar a while que es usado
para que un conjunto de instrucciones se cumplan 
siempre y cuando se cumplan las expresiones logicas*/

#include<iostream>
#include<conio.h>
//biblioteca para queb el porgrama se mantenga abierto
using namespace std;
int main(){
	int i;
	i=10;//con este while puede echar a andar
	while(i>=1){/*son muy importantes los
	signos de mayor o menor que */
		cout<<i<<endl;
		i--;//con esto i va a ir de uno en uno
	}
	getch();
	//funcion de la biblioteca para mantener abierto 
	return 0;
}
