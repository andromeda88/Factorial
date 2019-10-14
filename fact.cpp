#include <iostream>

//Programa que calula el factorial de un número entero positivo

using namespace std;
//Declaración de la función
double fact(int n);

//Implementación de la función
double fact(int n)
 {
	
	double b=n-1;
	double a=n;
	
	if(n==0 || n==1) {
		return 1;
		}
	
	else if (n<0)
		return 0;
	
	else {
	
		for(int i=b; i>=2; i--) {
		a=a*b;
		b--;
		}	
	return a;
	}
	
}
	
//Programa principal

int main() {

int n;
double m;

cout<<"Introduzca el número al cual quiere calcular el factorial"<<endl;
cin>>n;
m=fact(n);
cout<<"El factorial de "<< n <<" es "<< m << endl;

};
