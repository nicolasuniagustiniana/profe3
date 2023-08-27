#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero,*dir_numero;
	
	numero=25;
	dir_numero=&numero;
	
	cout<<"numero: "<<*dir_numero<<endl;
	cout<<"direccion de memoria: "<<dir_numero<<endl;
	
	getch();
	return 0;
}
