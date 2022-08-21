#include<iostream>
#include<conio.h>
using namespace std;
struct promedio{
	float n1;
	float n2;
	float n3;
};

struct alumno{
	char nombre[30];
	char sexo[20];
	int edad;
	struct promedio alumno;
}alumnos[1000];

int main(){
	int n;
	int mayor=0,pos=0;
	float promedio_final=0;
	
	cout<<"Digite la cantidad de alumnos del salon: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: ";
		cin.getline(alumnos[i].nombre,30,'\n');
		cout<<"Sexo: ";
		cin.getline(alumnos[i].sexo,30,'\n');
		cout<<"Edad: ";
		cin>>alumnos[i].edad;
		cout<<"\n";
		cout<<"Notas del alumno\n";
		cout<<"Nota 1: ";cin>>alumnos[i].alumno.n1;
		cout<<"Nota 2: ";cin>>alumnos[i].alumno.n2;
		cout<<"Nota 3: ";cin>>alumnos[i].alumno.n3;
		promedio_final=(alumnos[i].alumno.n1+alumnos[i].alumno.n2+alumnos[i].alumno.n3)/3;
		if(promedio_final>mayor){
			mayor=promedio_final;
			pos=i;
		}
		cout<<"\n";
	}
	
	cout<<"\tAlumno con mayor alto promedio\n";
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<promedio_final<<endl;
	cout<<"FELICIDADES, ¡ERES UN PINCHE MATADO QUE CHILLA CON UN 9.9!";
	cout<<"\nCHE NALGAS MEADAS";
	
	getch();
	return 0;
}
