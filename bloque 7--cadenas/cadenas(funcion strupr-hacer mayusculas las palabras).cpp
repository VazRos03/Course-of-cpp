//poasar una palabra a MAYUSCULAS-funcion strupr()
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	/*strupr(cadena)=toda la canensa pasara a mayusculas*/
	char cad[50];
	char cad2[50];
	
	cout<<"Digite la cadena 1: ";cin.getline(cad,50,'\n');
	cout<<"Digite la cadena 2: ";cin.getline(cad2,50,'\n');
	
	cout<<"cadenas en mayusculas:\n";
	strupr(cad);//haciendo las cadenas a mayusculas
	strupr(cad2);
	cout<<cad<<endl;
	cout<<cad2<<endl;
	
	//comparando si las cadenas son iguales o no
    if(cad==cad2){
    	cout<<"Las cadenas son iguales"<<endl;
	}
	else{
		cout<<"Las cadenas son diferentes"<<endl;
	}
	
	getch();
	return 0;
}
