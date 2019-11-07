#ifndef ENTRADA_H_
#define ENTRADA_H_

#include "Linea.h"
#include <sstream>
#include <fstream>
#include "Lista.h"


class Entrada{
private:
	Lista<Linea*>* lineas;
public:
	Entrada();
	~Entrada();
	void agregarLinea(Linea* nueva);
	void cargarFerrocarriles(std::string nombreArchivo);
	unsigned int getTotalLineas();
	Linea* getLinea(unsigned int posicion);
	Lista<Linea*>* getLineas();

private:
	double textoaNumero(std::string texto);
	std::string leerCampo(std::ifstream& archivo);

};

#endif /* ENTRADA_H_ */

