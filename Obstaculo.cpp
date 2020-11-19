#include <iostream>
using namespace std;


class Obstaculo
{
	private:
		short x,y;
		short nivelVida;
	
	public :
		//declaracion de los atributos publicos
		//tipo_Dato nombrevariable;
		char tipo;
		bool destruible;
	
		
		//constructor
		Obstaculo(short x1, short y1, char tipo1)
		{
			x = x1;
			y = y1;
			tipo = tipo1;
			destruible = 1;
			nivelVida = 3;
		}
		
		Obstaculo()
		{
			x = y = 0;
			tipo = 'L';
			destruible = 1;
			nivelVida = 2;
		}
		
		//metodos de acceso y modificación
		short getX()
		{
			return x;			
		}
		short getY()
		{
			return y;
		}
		short getNivelVida()
		{
			return nivelVida;
		}
		
		void setNivelVida(int valor)
		{
			nivelVida = valor;
		}
	
	
};
