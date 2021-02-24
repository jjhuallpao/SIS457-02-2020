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
	
	string cad_expresion;
	short nro_operaciones;
	int resultado;
	
	//implementar constructor que asigna la cadena dato a la expresion
	Expresion(string dato)
	{
		cad_expresion = dato;
	}
			
	//debe evaluar la expresion representada en uno de sus atributos
	//calcular el resultado
	int evaluarExpresion()
	{
		stack<int> pila;
		int a,b, c;
		for(int i = 0; i<cad_expresion.size(); i++)
		{
			char elemento = cad_expresion[i];
			switch(elemento)
			{
				case '*': case '+':
					a = pila.top();
					pila.pop();
					b = pila.top();
					pila.pop();				
					if(elemento == '*')
						c = a * b;
					if(elemento == '+')
						c = a + b;
					
					
					//cout<< a<< " "<< b<<"  "<< c<<endl;
					//cout<< c << " "<<((char)(c + 48))<< " " <<endl;
					pila.push( c )	;
					nro_operaciones++;
					break;
					
				default:
					//cout<<(((int) elemento) - 48)<< " ";
					pila.push(     ((int) elemento) - 48);
				//case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
					
				
			}
		}
		//implementar la logica 
		resultado = pila.top();
		//cout<< " Resultado "<<pila.top()<<endl;
		return resultado;
		
	}
};

int calcularTotales(vector<Expresion>  a){
	int sumaTotal = 0;
	// implementar el recorrido y la acumulacion de los resultados  del vector 'a'
	for(auto exp = a.begin(); exp!= a.end(); exp++)
	{
		//cout<<exp->resultado;
		sumaTotal += exp->resultado;
	}
	return sumaTotal;
}
	



	
int main(int argc, char *argv[]) {
	//Expresion a("aa");
	vector<Expresion> expresiones { Expresion("12+3*66*+"), Expresion("149"), Expresion("5555532+444********"), Expresion("99999****"), Expresion("12+3*4+5*6+7*9+0*1+")   };
	//vector<Expresion> expresiones { Expresion("99999****")};
	int acum = 0;
	for(auto exp = expresiones.begin(); exp!= expresiones.end(); exp++)
	{
		
		exp->evaluarExpresion();
		//cout<<endl;
		//cout<< exp->cad_expresion<<" " <<exp->resultado <<endl;
		cout<<exp->resultado <<endl;
	}
	//Implementar la logica del recorrido de las expresione y llamar a al calculo de sus resultados.
	cout<<calcularTotales(expresiones);
	return 0;
}

