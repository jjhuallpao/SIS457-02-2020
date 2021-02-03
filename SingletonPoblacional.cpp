#include <iostream>
#include <fstream>
#include <map>

using namespace std;

class SingletonPoblacion{
private:
	map<string, int> paises;
	static SingletonPoblacion* instancia;
	SingletonPoblacion()
	{
		string pais, pob;
		cout<<"Inicializando lectura poblacional"<<endl;
		ifstream lector("poblacion.txt");
		while(getline(lector,pais))
		//while(lector>>pais)
		{
			//lector>>pob;
			getline(lector, pob);
			//permite armar el mapa
			paises[pais] = stoi( pob);
		}
		
	}
public:
	string nombreDirector = "Director Fernando";
	static SingletonPoblacion* get_Instancia()
	{
		if(!instancia)
		{
			instancia = new SingletonPoblacion();
		}
		return instancia;
	}
	
	void verPoblacion(string pais)
	{
		cout<<paises[pais]<<endl;
	}
	
	void imprimirPoblaciones()
	{
		for(auto it = paises.begin(); it!= paises.end(); it++)
		{
			cout<<it->first<<" = " << it->second<<endl;
		}
	}
	
	void VerPoblacionEnRango(int a, int b)
	{
		
	}
	
	void VerPoblacionTop10()
	{
		
	}
	
	void VerPoblacionWorst10()
	{
		
	}
};

SingletonPoblacion *SingletonPoblacion::instancia = 0;

class Periodista
{
public :
	string nombre;
	string cadena;
	void entrevistarSenso(SingletonPoblacion *p, string pais)
	{
		cout<<"Somos de la cadena "<< cadena<<endl;
		cout<<"Te mostramos la poblacion de "<<pais<<endl;
		p->verPoblacion(pais);
	}
	Periodista(string a, string b)
	{
		nombre = a;
		cadena = b;
	}
	
};

int main(int argc, char *argv[]) {
	
	SingletonPoblacion *manager1, *manager2; 
	manager1 = SingletonPoblacion::get_Instancia();
	manager2 = SingletonPoblacion::get_Instancia();
	
	Periodista p1("Juan","ATB");
	Periodista p2("Rocio","CNN");
	Periodista p3("Pedro","RTP");
	p1.entrevistarSenso(manager1, "Bolivia");
	p2.entrevistarSenso(manager1, "Colombia");
	p3.entrevistarSenso(manager2, "Francia");
	
	
//	cout<<endl<<manager2->nombreDirector;
//	manager2->nombreDirector = "Director Aguilar";
//	cout<<endl<<manager1->nombreDirector;
//	
//	
//	manager2->imprimirPoblaciones();
//	manager1->verPoblacion("Bolivia");
	
	return 0;
}

