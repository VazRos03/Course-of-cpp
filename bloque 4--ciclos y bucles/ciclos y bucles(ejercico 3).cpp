#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x,y,elevacion=1;
	cout<<"digite el valor de x:";cin>>x;
	cout<<"digite el valor de y:";cin>>y;
	
	for(int i=1;i<=y;i++){
		elevacion*=x;
		//la elevacion se multipplicara con x
	}
	cout<<"resultado:\n"<<elevacion;
	getch();
	return 0;
}
