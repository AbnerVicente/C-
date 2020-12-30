#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
using std::setw;

	void ordenarArreglo(int * const , const int );
	void intercambiar( int * const , int * const );
	void imprimirArreglo( const int * const , const int );


	void ordenarArreglo(int * const arreglo, const int tamanio){
		int minimo;
		for(int i = 0; i < tamanio; i++ ){
			minimo = i;
			for( int j = i + 1; j < tamanio; j++){
				if( arreglo[j] < arreglo[minimo]){
				minimo = j;
				}
			intercambiar(&arreglo[i] , &arreglo[minimo]);
		}
	}
}
	void intercambiar( int * const num1, int * const num2){

		int auxiliar = *num1;
		*num1 = *num2;
		*num2 = auxiliar;
	}

	void imprimirArreglo( const int * const valor, const int tamanio){
		for(int i = 0; i < tamanio; i++ )
			cout<<setw(5)<<valor[i];
	}



int main(){
	int tamanio=0;
	int valor[tamanio];

	cout<<"Con cuantos valores va a trabajar 'caracteres numericos'"<<endl;
	cin>>tamanio;
	cout<<"Ingrese los valores"<<endl;
	for(int x=0;x<tamanio;x++){
		cin>>valor[x];

	}
	ordenarArreglo(valor, tamanio);
	imprimirArreglo(valor, tamanio);
 	getch();

    return 0;
}
