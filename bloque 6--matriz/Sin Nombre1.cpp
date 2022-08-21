#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[100][100], n, m;
	
	cin>>n;
	cin>>m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>matriz[i][j];
		}
		cout<<"\n";
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	
	
	return 0;
}