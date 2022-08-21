/*ESte es el ultimo ejercicio de condicionales
en funcion de switch*/
#include<iostream>
#include<math.h>
//biblioteca para funciones matematicas
using namespace std;
int main(){
    
	int numero,cubo,opc;
	
	cout<<"\tMENU\n"<<endl;
	//el \t es para dar espacio en la oracion
	cout<<"1.Elevar un numero al cubo\n"<<endl;
	cout<<"2.Numero par o impar\n"<<endl;
	cout<<"3.Salir del programa\n"<<endl;
	cout<<"Opciones:";cin>>opc;
	
	switch(opc){
		case 1:
            cout<<"Digite un numero:";
			cin>>numero;
			cubo= pow(x,3);
			cout<<"El resultado es:"<<cubo;break;
		case 2:
			cout<<"Digite un numero:";
			cin>>numero;
		    if(numero%2==0){
			cout<<"El numero es par";
	    	}
	       	else{
			cout<<"El numero es impar";
	    	}break;
		case 3:break;
}
  return 0;
}
	
