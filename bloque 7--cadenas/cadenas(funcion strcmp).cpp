//compara cadenas-funcion strcmp()
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
	char nombre[]="pambazo";
	char nombre2[]="Pambazo";
	//la fucion strcmp, se usa más en condicionales
	if(strcmp(nombre, nombre2)!=0){
		cout<<"ambas cadenas son distintas"<<endl;
	}
	//si pusieramos !=0 estamos diciendo que es diferente
	//entonces debemos cambiar el mensaje 
	system("pause");
	return 0;
}
