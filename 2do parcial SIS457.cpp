#include <iostream>
#include <list>
#include <vector>
using namespace std;

void agregar_al_vector(list<int> &A,int x)
{
	
	A.push_back(x);

}

/*sort the vector A in ascending order*/
void ordenar_vector_asc(list<int> &A)
{
	//Your code here
	A.sort();
}

/*reverses the vector A*/
void reversa_vector(list<int> &A)
{
	//Your code here
	A.reverse();
}

/*returns the size of the vector  A */
int long_de_vector(list<int> &A)
{
	
	//Your code here
	return A.size();
}

/*sorts the vector A in descending order*/
void ordenar_vector_desc(list<int> &A)
{
	A.sort();
	A.reverse();
}

/*prints space separated 
elements of vector A*/
void imprimir_vector(list<int> &A)
{
	for(auto it = A.begin(); it!=A.end(); it++ )
		cout<<*it<<" ";
}

int main()
{
	int n,q,x; char op;  list<int> a;
	cin>>n; //leemos la cantidad de pruebas que se realizaran
	for(int i = 0; i<n; i++)		
	{
		a.clear();
		cin>>q; // leemos la cantidad de consultas que se realizaran
		for(int j = 0; j<q; j++)
		{
			cin>>op;
			switch(op)
			{
				case 'a': // se inserta un elemento x a la lista 'a'
					cin>>x;
					agregar_al_vector(a,x);
					break;
				case 'b':// ordenamos lista ascendentemente
					ordenar_vector_asc(a);
					break;
				case 'c': // volcamos los elementos de la lista al reves
					reversa_vector(a);
					break;
				case 'd': // irmprimimos la longitud de la lista
					cout<<long_de_vector(a)<<" ";
					break;
				case 'e':
					imprimir_vector(a); // irmprimimos los elementos de la lista
					break;
				case 'f':
					ordenar_vector_desc(a); // ordenamos lista descendentemente
					break;
			
			}
		}
	}
	
	return 0;
}
