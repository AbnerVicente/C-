#include <iostream>
#include<conio.h>
#include<locale.h>
using namespace std;
float operaciones (int num1,int num2,char opera);
float resultado;
int main()

{setlocale(LC_CTYPE,"Spanish");

    int numero1,numero2;
char operacion;
    cout<<"Digite el primer n�mero: ";
cin>>numero1;cout<<""<<endl;
  cout<<"Digite el segundo n�mero: ";
cin>>numero2;cout<<""<<endl;
cout<<"Seleccione la operaci�n a realizar: ";
cin>>operacion;cout<<""<<endl;

operaciones(numero1,numero2,operacion);
    getch();
    return 0;
}

float operaciones (int num1,int num2,char opera){

if(opera=='+'){
  resultado=(num1+num2);
  cout<<"La suma de: "<<num1<<" + "<<num2<<" es: "<<resultado;
}

if(opera=='-'){
  resultado=(num1-num2);
  cout<<"La resta de: "<<num1<<" - "<<num2<<" es: "<<resultado;
}
if(opera=='*'){
  resultado=(num1*num2);
  cout<<"La multiplicaci�n  de: "<<num1<<" * "<<num2<<" es: "<<resultado;
}
if(opera=='/'){
  resultado=(num1/num2);
  cout<<"La divisi�n de: "<<num1<<" / "<<num2<<" es: "<<resultado;
}





}
