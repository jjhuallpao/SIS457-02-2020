#include <iostream>
#include "Tanque.h"
using namespace std;


Tanque::Tanque() 
{
	x = y = 10;
	nivelVida = 10;
	direccion = 1; 
	color = "Cafe";
}

Tanque::Tanque(short x1,short y1) : x(x1), y(y1)
{
//	x = x1;
//	y = y1;
//	nivelVida = 3;
//	direccion = 4;
//	color = "Negro";	
	
}

void Tanque::imprimir()
{
	cout<<endl;
	cout<<"Coordenadas : " << x<< " "<<y<<endl;
	cout<<"Direccion "<< direccion<<endl;
	cout<<"Nivel de Vida "<< nivelVida<<endl;
}


void Tanque::mover()
{	
	if(direccion == 1)
	{
//		if(nohayobstaculo(y+1, x))
//		   y = y +1;
//		else
//			reproducirChoque();
		
		y = y +1;
	}
	if(direccion == 2)
	{
		y = y -1;
	}
	if(direccion == 3)
	{
		x = x -1;
	}
	if(direccion == 4)
	{
		x = x +1;
	}
}


