/*en esta arte de condicionales vamos a 
convertir los numeros 1-12 en meses*/
#include<iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite un numero del 1 al 12:\n";
	cin>>numero;
	 cout<<"\n";//esto es una marranada, pero sirve
	switch(numero){
	
	case 1:cout<<"Tu mes es enero";break;
	case 2:cout<<"Tu mes es febrero";break;
	case 3:cout<<"Tu mes es marzo";break;
	case 4:cout<<"Tu mes es abril";break;
	case 5:cout<<"Tu mes es mayo";break;
	case 6:cout<<"Tu mes es junio";break;	
	case 7:cout<<"Tu mes es julio";break;	
	case 8:cout<<"Tu mes es agosto";break;	
	case 9:cout<<"Tu mes es septiembre";break;	
	case 10:cout<<"Tu mes es octubre";break;		
	case 11:cout<<"Tu mes es noviembre";break;	
	case 12:cout<<"Tu mes es diciembre";break;	
	default:cout<<"Animal, no es un numero dentro del rago";	
	}
	
	return 0;
}
