#include<iostream>
#include<conio.h>

using namespace std;


void cajero(){
	char name [30], rpt;
	int year, opc;
	float money;
	
	do{
		cout<<"\t REGISTRO DE TRABAJADORES \n";
		cout<<"1.Regristro de usuario";
		cout<<"\n2.Mostrar Usuarios";
		cout<<"\n3.Salir";
		cout<<"\nIngrese la opcion deseada: "; cin>>opc;
		
		switch(opc){
			case 1: 
				cout<<"Nombre del trabajador: ";
				cin.getline(name,30,'\n');
				cout<<"\nEdad del trabajador: ";
				cin>>year;
				cout<<"\nSalario del trabajador: ";
				cin>>money;
			break;
			
			case 2: 
				for(int i = 0; i<3 ; i++){
				cout<<"Nombre: "<<name<<endl;
				cout<<"Edad: "<<year<<endl;
				cout<<"Salario: "<<money<<endl;
			}
			system ("pause");
			break;
			
			case 3: break;
		}
		system("cls");
	}while(opc != 3);
	
}

int main(){
	
	
	cajero();
	
	
	getch();
	return 0;
}



