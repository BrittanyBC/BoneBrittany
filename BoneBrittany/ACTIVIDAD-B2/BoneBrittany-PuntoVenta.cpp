#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
//funcion principal
int main()
{
	//declaracion de vriables
	float n1,n2,n3,iva,st;
	//insercion de datos o productos
	cout<<"Ingrese el primer producto:";	
	cin>>n1;
	cout<<"Ingrese el segundo producto:";
	cin>>n2;
	cout<<"Ingrese el tercer producto:";
	cin>>n3;
	//suma de la compra
	s=n1+n2+n3;
	//calculo de impuesto al valor agregado
	iva=s*0.12;
	//precio final
	st=s+iva;
	cout<<"El total de su compra es:"st;
	}