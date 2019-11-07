#ifndef ESTACION_H_
#define ESTACION_H_

#include <iostream>
#include "Coordenada.h"

class Estacion{
private:
	std::string linea;
	std::string nombre;
	Coordenada ubicacion;
	std::string combinaciones;
	std::string transporte;
public:
	Estacion(std::string linea,std::string nombre,Coordenada ubicacion,
			std::string combinaciones,std::string transporte);
	Estacion();
	void setLinea(std::string& nuevaLinea);
	void setNombre(std::string& nuevoNombre);
	void setUbicacion(Coordenada& nueva);
	void setCombinaciones(std::string& combinaciones);
	void setTransporte(std::string nuevoTransporte);

	std::string getLinea() const;
	std::string getNombre() const;
	Coordenada getUbicacion() const;
	std::string getCombinaciones() const;
	std::string getTransporte() const;
};

#endif /* ESTACION_H_ */
