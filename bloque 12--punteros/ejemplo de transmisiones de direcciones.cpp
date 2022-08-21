//ejercicio de transmision de direcciones

#include<iostream>
#include<conio.h>

using namespace std;
int num, num2;

void inter(int *pun_num, int *pun_num2){
	int aux;
	
	//intercambio
	
	aux = *pun_num;
	*pun_num = *pun_num2;
	*pun_num2 = aux;
}


int main(){
	
	int suma = 0;
	
	cout<<"TRANSMISIONES DE DIRECCIONES\n";
	
	
	cout<<"Ingresa un valor: ";
	cin>>num;
	
	cout<<"Ingrese otro valor: ";
	cin>>num2;
	
	
	inter(&num,&num2);
	cout<<"\nIntercambio de valores ";
	
	cout<<"\nPrimer valor: "<<num;
	cout<<"\nSegundo valor: "<<num2;
	
	suma= num+num2;
	
	cout<<"\nSuma: "<<suma;
	
	
	return 0;
	getch();
}





