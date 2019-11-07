
#include "Estacion.h"
#include <string>


Estacion::Estacion(std::string linea,std::string nombre,
						Coordenada ubicacion, std::string combinaciones,
						std::string transporte)
{
	this->linea = linea;
	this->nombre = nombre;
	this->ubicacion = ubicacion;
	this->combinaciones = combinaciones;
	this->transporte = transporte;
}
Estacion::Estacion()
{
	this->linea = "SIN DATOS";
	this->nombre = "SIN DATOS";
	this->transporte = "SIN DATOS";
	this->combinaciones = "SIN DATOS";

}



void Estacion::setUbicacion(Coordenada& nueva)
{
	this->ubicacion.setLatitud(nueva.getLatitud());
	this->ubicacion.setLongitud(nueva.getLongitud());
}


void Estacion::setCombinaciones(std::string& combinaciones)
{
	this->combinaciones = combinaciones;
}


Coordenada Estacion::getUbicacion() const{
		return this->ubicacion;
}

std::string Estacion::getCombinaciones() const
{
		return this->combinaciones;
}
std::string Estacion::getNombre() const
{
	return this->nombre;
}
