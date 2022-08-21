//introduccion de funciones

#include<iostream>
#include<conio.h>
using namespace std;

//prototipo de funcion
int encontrarMax(int x, int y);

int main(){
	int n1,n2;
	
	cout<<"Digite dos numeros: ";
	cin>>n1>>n2;
	
	cout<<"\nEl numero mayor es: "<<encontrarMax(n1,n2)<<endl;
	
	cout<<"-----------------\n";
	cout<<"-----------------\n";
	cout<<"-----------------\n";
	cout<<"----\n";
	cout<<"----\n";
	cout<<"------------\n";
	cout<<"------------\n";
	cout<<"------------\n";
	cout<<"----\n";
	cout<<"----\n";
	cout<<"----\n";
	cout<<"----\n";
	cout<<"----\n";
	cout<<"----\n";
	getch();
	return 0;
}


//definicion de funcion
int encontrarMax(int x,int y){
	int nummax;
	
	if(x>y){
		nummax=x;
	}
	else{
		nummax=y;
	}
}









