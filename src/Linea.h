#ifndef LINEA_H_
#define LINEA_H_

#include "Lista.h"
#include "Estacion.h"


class Linea{

private:
	Lista<Estacion*>* estaciones;
	std::string nombre;
	std::string ramal;
public:
	Linea(Linea* aCopia);
	Linea(std::string nombre,std::string ramal);
	Linea();
	~Linea();

	std::string getNombre();
	std::string getTransporte();
	std::string getRamal();
	Lista<Estacion*>* getEstaciones();

	void setNombre(std::string nombre);
	void setRamal(std::string ramal);
	void setTransporte(std::string transporte);
	void agregarEstacion(Estacion* nueva);
	bool estaVacia();
	bool lineaCoincide(std::string nombreLinea);

};
#endif /* LINEA_H_ */
