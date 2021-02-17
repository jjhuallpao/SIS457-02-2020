#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Expresion{
public:
	//debe declarar los atributos:
	//cadena que rerpesenta a la expresion;
	//Numero de operacines realizadas en la Expresion
	//Resultado de la expresion
	
	//implementar constructor que asigna la cadena dato a la expresion
	Expresion(string dato)
	{
		
	}
			
	//debe evaluar la expresion representada en uno de sus atributos
	//calcular el resultado
	int evaluarExpresion()
	{
		stack<short> pila;
		
		//implementar la logica 
		
		return pila.top();
		
	}
};

int calcularTotales(vector<Expresion>  a){
	int sumaTotal = 0;
	// implementar el recorrido y la acumulacion de los resultados  del vector 'a'
	
	return sumaTotal;
}
	



	
int main(int argc, char *argv[]) {
	Expresion a("aa");
	vector<Expresion> expresiones { Expresion("12+3*66*+"), Expresion("149"), Expresion("5555532+444********"), Expresion("99999****"), Expresion("12+3*4+5*6+7*9+0*1+")   };
	//Implementar la logica del recorrido de las expresione y llamar a al calculo de sus resultados.
	cout<<calcularTotales(expresiones);
	return 0;
}

