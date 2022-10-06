// cola estatica

#include <iostream>
#include <stdlib.h>
#include <conio.h>

const int MAXIMO = 10;

class ColaEstatica {
	public:
		int inicio;
		int cola[];
		
		ColaEstatica() {
			this->inicio = -1;
			this->cola[MAXIMO-1];
		}
		
		void ingresarElementos(int numero) {
			if(!estaLlena()) {
				inicio++;
				cola[inicio] = numero;
				std::cout << "Push(): " << cola[inicio] << std::endl;
			} else {
				std::cout << "La cola esta al tope" << std::endl;
			}
		}
		
		void quitarElemento() {
			int i;
			if(!estaVacia()) {
				for(i = 0; i < MAXIMO; i++) {
					std::cout << "Pop(): " << cola[i] << std::endl;
				}
				inicio = -1;
				cola[inicio];
			} else {
				std::cout << "La cola esta vacia" << std::endl;
			}
		}
		
		bool estaVacia() {
			if(inicio == -1){
				return true;
			}
			else {
				return false;
			}
		}
		
		bool estaLlena() {
			if(inicio == (MAXIMO-1)) {
				return true;
			}
			else {
				return false;
			}
		}
};

int main(void) {
	ColaEstatica *obj1 = new ColaEstatica;
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
	obj1->quitarElemento(); // estrae el 9, 8, 4, 3..., 14.
	obj1->quitarElemento();
	obj1->quitarElemento();
	
	//system("pause > 0");
	_getch();
	return 0;
}
