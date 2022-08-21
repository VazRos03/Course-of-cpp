//estructuras anidadas
#include<iostream>
#include<conio.h>
using namespace std;

struct inf_direccion{
	char direccion[30];
	char Ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[30];
	struct inf_direccion dir_empleado;
	//dentro de esta esructura tenemos la primera 
	double slario;
	//double sirve para guardad valores en decimales
}empleados[2];

int main(){
	//ciclo for para guardad los datos
	for(int i=0;i<2;i++){
		fflush(stdin);
		//vaciar el biffer y permitir iniciar de nuevo
		cout<<"Nombre: ";
		cin.getline(empleados[i].nombre,30,'\n');
		cout<<"Direccion: ";
		cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Ciudad: ";
		cin.getline(empleados[i].dir_empleado.Ciudad,20,'\n');
		cout<<"Provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Salario: ";cin>>empleados[i].slario;
		cout<<"\n";
	}
	//imprimiendo datos en ciclo for
	cout<<"\tDatos de los contribuyentes\n";
	for(int i=0;i<2;i++){
	cout<<"Nombre: "<<empleados[i].nombre<<endl;
	cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
	cout<<"Ciudad: "<<empleados[i].dir_empleado.Ciudad<<endl;
	cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
	cout<<"Salario: "<<empleados[i].slario<<endl;
	cout<<"\n";	
	}
getch();
return 0;
}


