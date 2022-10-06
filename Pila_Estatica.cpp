// Pila estatica

#include <iostream>
#include <stdlib.h>
#include <conio.h>

const int MAXIMO = 10;

class PilaEstatica {
	public:
		int cima;
		int pila[];
		
		PilaEstatica() {
			this->cima = -1;
			this->pila[MAXIMO-1];
		}
		
		void ingresarElementos(int numero) {
			if(!estaLlena()) {
				cima++;
				pila[cima] = numero;
				std::cout << "Push(): " << pila[cima] << std::endl;
			} else {
				std::cout << "La pila esta al tope" << std::endl;
			}
		}
		
		void quitarElemento() {
			if(!estaVacia()) {
				std::cout << "Pop(): " << pila[cima] << std::endl;
				cima--;
			}
			else {
				std::cout << "La pila esta vacia" << std::endl;
			}
		}
		
		void elementoCima() {
			if(!estaVacia()) {
				std::cout << "\nUltimo elemento actual de pila: " << pila[cima] << std::endl;
			}
			else {
				std::cout << "La pila esta vacia" << std::endl;
			}
		}
		
		bool estaVacia() {
			if(cima == -1){
				return true;
			}
			else {
				return false;
			}
		}
		
		bool estaLlena() {
			if(cima == (MAXIMO-1)) {
				return true;
			}
			else {
				return false;
			}
		}
};

int main(void) {
	PilaEstatica *obj1 = new PilaEstatica;
	obj1->ingresarElementos(9); // ultimo extraer
	obj1->ingresarElementos(8);
	obj1->ingresarElementos(4);
	obj1->ingresarElementos(3);
	obj1->ingresarElementos(15);
	obj1->ingresarElementos(0);
	obj1->ingresarElementos(1);
	obj1->ingresarElementos(63);
	obj1->ingresarElementos(22);
	obj1->ingresarElementos(14); //primero extraer
	obj1->ingresarElementos(99);
	obj1->ingresarElementos(400);
	std::cout << "\n\n" << std::endl;
	obj1->quitarElemento(); // estrae el 14
	obj1->quitarElemento(); // estrae el 22
	obj1->quitarElemento(); // estrae el 63
	obj1->quitarElemento(); // estrae el 1
	obj1->elementoCima();
	obj1->quitarElemento(); // estrae el 0
	obj1->quitarElemento(); // estrae el 15
	obj1->quitarElemento(); // estrae el 3
	obj1->elementoCima();
	obj1->quitarElemento(); // estrae el 4
	obj1->elementoCima();
	obj1->quitarElemento(); // estrae el 8
	obj1->quitarElemento(); // estrae el 9
	obj1->quitarElemento();
	obj1->quitarElemento();
	
	//system("pause > 0");
	_getch();
	return EXIT_SUCCESS;
}
