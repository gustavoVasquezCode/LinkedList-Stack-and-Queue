// Lista enlazada

#include <iostream>
#include <stdlib.h>

class Nodo {
	public:
		Nodo *siguiente;
		int dato;
		Nodo() {
			this->dato = dato;
			this->siguiente = NULL;
		}
};

class ListaEnlazada : public Nodo {
	public:
		Nodo *primero;
		int tamanio;
		listaEnlazada() {
			this->primero = NULL;
			this->tamanio = 0;
		}
		
		void ingresarDatos(int dato) {
			Nodo *insertar = new Nodo;
			insertar->dato = dato;
			insertar->siguiente = primero;
			primero = insertar;
			tamanio++;
		}
		
		void enlistar() {
			Nodo *actual = primero;
			while (actual != NULL) {
				std::cout << "[" << actual->dato << "]-->";
				actual = actual->siguiente;
			}
			std::cout << "NULL" << std::endl;
		}
};

int main(void) {
	ListaEnlazada *obj1 = new ListaEnlazada;
	obj1->ingresarDatos(8);
	obj1->ingresarDatos(4);
	obj1->ingresarDatos(6);
	obj1->ingresarDatos(15);
	obj1->ingresarDatos(9);
	obj1->ingresarDatos(10);
	obj1->ingresarDatos(58);
	obj1->ingresarDatos(66);
	obj1->ingresarDatos(25);
	obj1->ingresarDatos(400);
	obj1->ingresarDatos(0);
	obj1->ingresarDatos(1000);
	obj1->enlistar();
	
	system("pause > 0");
	return EXIT_SUCCESS;
}
