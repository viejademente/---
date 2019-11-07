
#include "Linea.h"



Linea::Linea(Linea* aCopia)
{
	this->nombre = aCopia->getNombre();
	this->ramal = aCopia->getRamal();
	this->estaciones = aCopia->getEstaciones();
}

Linea::Linea()
{
	this->estaciones = NULL;
	this->nombre = "SIN DATOS";
	this->ramal = "SIN DATOS";
}
Linea::Linea(std::string nombre,std::string ramal)
{
	this->nombre = nombre;
	this->ramal = ramal;
	this->estaciones = NULL;
}
Linea::~Linea()
{
	delete estaciones;
}
std::string Linea::getNombre()
{
	return this->nombre;
}

std::string Linea::getRamal()
{
	return this->ramal;
}

Lista<Estacion*>* Linea::getEstaciones()
{
	return this->estaciones;
}


void Linea::setRamal(std::string ramal)
{
	this->ramal = ramal;
}

void Linea::setNombre(std::string nombre)
{
	this->nombre = nombre;
}

void Linea::agregarEstacion(Estacion* nueva)
{
	if(estaciones == NULL)
	{
		this->estaciones = new Lista<Estacion*>;
	}

		estaciones->agregar(nueva);
}
bool Linea::estaVacia()
{
	return (this->estaciones == NULL);
}
bool Linea::lineaCoincide(std::string nombreLinea){
	return (nombreLinea == this->nombre);
}
