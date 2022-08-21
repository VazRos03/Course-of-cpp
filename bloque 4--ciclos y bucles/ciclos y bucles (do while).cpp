/*ahora vamos a ver la estructura 
"do{


}while();"*/
#include<iostream>
#include<stdlib.h>
//libreria como la de while con la misma funcion
using namespace std;
int main(){
	int i;
	i=10;
	do{
		cout<<i<<endl;
		i--;
	}while(i>=1);
	/*la funcion "while" y "do while"
	tienen la misma funcion, solo que la diferencia
	es de que el primero piensa y luego actua y el
	segundo actua y luego piensa*/
	
	system("pause");
	//es lo mismo como while pero para do while
	return 0;
}
