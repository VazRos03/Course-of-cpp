//el siguiente ejercicio de expresion matematica en c++ 
//sera declarar la expresion (a+b)/(c+d)
#include<iostream>
using namespace std;
int main(){
	float a,b,c,d,resultado=0;
	
	cout<<"Digite el valor de a:";cin>>a;
	cout<<"Digite el valor de b:";cin>>b;
	cout<<"digite el valor de c:";cin>>c;
	cout<<"Digite el valor de d:";cin>>d;
	
	resultado=((a+b)/(c+d));
	cout.precision(2);
	cout<<"el resultado es:\n"<<resultado<<endl;
	return 0;
}
