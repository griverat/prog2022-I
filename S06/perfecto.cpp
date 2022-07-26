/*
 * Impresión de todos los números perfectos hasta cierto límite superior
 */

#include<iostream>
using namespace std;

bool es_perfecto(int);
bool son_amigos(int, int); // es_perfecto = son_amigos(n, n)

int main(){

	int n;
	cout<<"Ingrese el límite superior: ";
	cin>>n;

	for (int i=1; i<=n; i++){
		if (es_perfecto(i))
			cout<<i<<endl;
	}
	return 0;
}


bool es_perfecto(int n){
	int suma = 0;

	for (int i=1; i<=n/2; i++)
		if (n % i == 0)
			suma = suma + i; //sumando divisores propios
	
	if (suma == n)
		return true;
	return false;
}

bool son_amigos(int x, int y){
	return true;
}

