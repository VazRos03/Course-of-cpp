#include<iostream>
#include<conio.h>
using namespace std;

struct atletas{
	  char nombre[30];
	  char pais[30];
	  int medallas;
}atleta[1000];

int main(){
	int mayor=0,pos=0;
	int n;
	cout<<"Digite la cantidad de atletas: ";
	cin>>n;
	cout<<"\n";
	
	cout<<"Datos del atleta\n";
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: ";cin.getline(atleta[i].nombre,30,'\n');
		cout<<"Pais: ";
		cin.getline(atleta[i].pais,30,'\n');
		cout<<"Numero de medallas: ";
		cin>>atleta[i].medallas;
	
		if(atleta[i].medallas>mayor){
			mayor=atleta[i].medallas;
			pos=i;
		}
		cout<<"\n";
}
	cout<<"Atleta con mayor numero de medallas\n";
	cout<<"Nombre: "<<atleta[pos].nombre<<endl;
	cout<<"Pais: "<<atleta[pos].pais<<endl;
	cout<<"Num. de medallas: "<<atleta[pos].medallas<<endl;
	getch();
	return 0;
	}
