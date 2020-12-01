#include <iostream>
using namespace std;
#include "Producto.h"
#include "Animal.h"
#include "ListaAnimales.h"
#include "PetShop.h"
#include "Mamifero.h"

//EJEMPLOS DE HERENCIA MULTIPLE Y POLIMORFISMO DE ANIMAL
//Clases heredadas:
class Perro : public Mamifero, public Animal {
public:
	Perro() {
	}
	~Perro() {
	}
	void mostrarTipoDeLeche() {
		cout << "Leche de cachorro " << endl;
	}
};

class Gato : public Mamifero, public Animal {
public:
	Gato() {
	}
	~Gato() {
	}
	void mostrarTipoDeLeche() {
		cout << "Leche de gatito " << endl;
	}
};

class Pajaro : public Animal {
public:
	Pajaro() {
	}
	~Pajaro() {
	}
};



int main() {
	//Creacion de productos para prueba
	Producto ComidaDePerro;
	ComidaDePerro.setDescripcion("Jugete para Perro");
	ComidaDePerro.setDisponibilidad(true);
	ComidaDePerro.setPrecio(100);

	Producto ComidaDePajaro;
	ComidaDePajaro.setDescripcion("Semillas de pajaro ");
	ComidaDePajaro.setDisponibilidad(true);
	ComidaDePajaro.setPrecio(80);

	Producto ComidaDeGato;
	ComidaDeGato.setDescripcion("Torre para gato");
	ComidaDeGato.setDisponibilidad(true);
	ComidaDeGato.setPrecio(303);


	//Creacion de animales para prueba

	Pajaro Paloma;
	Paloma.setDisponibilidad(true);
	Paloma.setEdad(1);
	Paloma.setPrecio(1250);
	Paloma.setRaza("Paloma Azul");
	Paloma.insertarProductoNuevo(ComidaDePajaro);


	Perro Coocker;
	Coocker.setDisponibilidad(true);
	Coocker.setEdad(2);
	Coocker.setPrecio(500);
	Coocker.setRaza("Coocker");
	Coocker.insertarProductoNuevo(ComidaDePerro);

	Gato Persa;
	Persa.setDisponibilidad(true);
	Persa.setEdad(2);
	Persa.setPrecio(400);
	Persa.setRaza("Persas");
	Persa.insertarProductoNuevo(ComidaDeGato);


	PetShop PS(5);
	PS.setDireccion("America");
	PS.setNombre("CANDOG");
	PS.setNumero(7737277);
	PS.insertarAnimal(Coocker);
	PS.insertarAnimal(Paloma);
	PS.insertarAnimal(Persa);

	PS.mostrarPetShop();

	getchar();
	return 0;
}