#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include<fstream>
using namespace std;
int main()
{
	//declaracion de variables
	int t1,t2,ed;
	//insercion de datos
	cout<<"Ingrese el año actual";
	cin>>t1;
	cout<<"Ingrese su año de nacimiento";
	cin>>t2;
	//calculo de edad
	ed=t1-t2;
	//resultado
	cout<<"Su edad es:"ed;
}