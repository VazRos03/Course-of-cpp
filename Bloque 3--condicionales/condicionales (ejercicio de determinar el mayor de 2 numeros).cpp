/*Este es elprimer ejercicio de condicionales y vamos a determinar el mayor
de 3 numeros :3*/

#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"digite tres numeros:\n";
	cin>>n1>>n2>>n3;
	
	if (n1=n2==n3){
		cout<<"Los tres digitos son iguales";
	}
	else if (n1>n2){
		cout<<"el mayor es:\n"<<n1;
	}
	else if(n2>n3){
		cout<<"El mayor es:\n"<<n2;
	}
	else{
		cout<<"El mayor es:\n"<<n3;
	}
	return 0;
}
