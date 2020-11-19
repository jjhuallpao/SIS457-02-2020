#include <iostream>
using namespace std;

class Tanque
{
	private :
		short x,y;
		short direccion; 
	public:
		string color;
		short nivelVida;
		
		
		//Constructor
		Tanque();
		Tanque(short x1,short y1);
		
		
		//fimar de los metodos
		void disparar();
		void girar(int dir);
		void mover();
		void chocar();
		void eliminarObstaculo();
		void imprimir();
		
};
