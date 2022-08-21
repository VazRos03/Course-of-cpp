#include <iostream>

using namespace std;

//prototipo
int encontrarMayor(int a, int b);
int sumar(int x,int y);

int main() {
	int num1 = 0, num2 = 0, resultado = 0;
	cout << "Dame el primer numero: "<<endl;
	cin >> num1;
	cout << "Dame el segundo numero: "<<endl;
	cin >> num2;
	
	resultado = encontrarMayor(num1, num2);
	cout << "El numero mas grandes es el: " << resultado <<endl;
	
	resultado = sumar(num1, num2);
	cout << "La suma de los 2 numeros es: " << resultado <<endl;
 	
	
	return 0;
}
//definir
int encontrarMayor(int a, int b){
	
	int numMayor = 0;
	
	if(a < b){
		numMayor = b;
	}else{
		if(a > b){
			numMayor = a;
		}else{
			numMayor = a;
			cout <<"los numeros son iguales" <<endl;
		}
	}
	
	return numMayor;
}

int sumar(int x,int y){ 
    int sumar=0;
  sumar=x+y;

}

