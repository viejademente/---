#include "Coordenada.h"
#include <math.h>

Coordenada::Coordenada()
{
	this->latitud = 0.0f;
	this->longitud = 0.0f;
}

Coordenada::Coordenada(double& latitud, double& longiutd)
{
	this->latitud = latitud;
	this->longitud = longitud;
}
double& Coordenada::getLatitud(){
	return this->latitud;
}
double& Coordenada::getLongitud(){
	return this->longitud;
}

void Coordenada::setLatitud(double& latitud){
	this->latitud = latitud;
}

void Coordenada::setLongitud(double& longitud){
	this->longitud = longitud;
}
