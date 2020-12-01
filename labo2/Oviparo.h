#pragma once
#include "Animal.h"

//CLASE ABSTRACTA
class Oviparos
{
public:
	Oviparos();
	~Oviparos();
	void setHuevo(string huevo);
	void virtual mostrarTipoDeHuevo() = 0;

private:
	string tipoDeHuevo;

};


inline Oviparos::Oviparos()
{
}

inline Oviparos::~Oviparos()
{
}

void Oviparos::setHuevo(string huevo) {
	tipoDeHuevo = huevo;
}
