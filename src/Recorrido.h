/*
#include "Linea.h"


class Recorrido{

private:
	const int MAX_COMBINACIONES = 2;
	const int MAX_RADIO = 7;
	const int MAX_SOLUCIONES = 2;
	Lista<Lista<Estacion>> rutasHalladas;
	Lista<Linea*>* lineas;
public:
	Recorrido(Lista<Linea*>* lineas);
	void buscarRuta(Coordenada destino,Lista<Estacion> Recorrido, int combinaciones, Coordenada origenActual);
private:
	Lista<Linea*>* buscarLineasCercanas(Coordenada origenActual);
	Lista<Estacion*>* buscarMejoresEstaciones(Lista<Linea*>* lineasCercanas, Coordenada destino);
};



void Recorrido::buscarRuta(Coordenada destino,Lista<Estacion> Recorrido, int combinaciones, Coordenada origenActual)
{

	if(combinaciones > MAX_COMBINACIONES || this->rutasHalladas.contarElementos() >= MAX_SOLUCIONES){
		return;
	}

	if(origenActual.distancia(destino) <= MAX_RADIO){
		rutasHalladas.agregar(Recorrido);
		return;
	}

	Lista<Linea*>* lineasCercanas;
	Lista<Estacion*>* estacionesCercanas;

	lineasCercanas = buscarLineasCercanas(origenActual);
	estacionesCercanas = buscarMejoresEstaciones(lineasCercanas,destino);

	for(unsigned int i=1; i<estacionesCercanas->contarElementos(); i++){
		Recorrido.agregar(*(estacionesCercanas->obtener(i)));
		buscarRuta(destino,Recorrido,combinaciones+1,estacionesCercanas->obtener(1)->getUbicacion());
		Recorrido.remover(Recorrido.contarElementos());
	}
	return;
}






Recorrido::Recorrido(Lista<Linea*>* lineas){
	this->lineas = lineas;
}

*/
