#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,suma=0;
	cout<<"Digite un numero impar:";cin>>n;
	
	if(n%3)/*impar o par % y el numero*/{
		for(int i=1;i>=n;i++){
			suma+=2*n;
		}
	}
	cout<<"El resultado es:"<<suma;
	getch();
	return 0;
}
