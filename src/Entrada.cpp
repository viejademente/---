
#include "Entrada.h"
#include <string>


Entrada::Entrada(){
	lineas = NULL;
}
Entrada::~Entrada(){
	delete lineas;
}

void Entrada::agregarLinea(Linea* nueva)
{
	if(this->lineas == NULL)
	{
		lineas = new Lista<Linea*>;
	}

	lineas->agregar(nueva);

}

Linea* Entrada::getLinea(unsigned int posicion)
{
	return lineas->obtener(posicion);
}
unsigned int Entrada::getTotalLineas(){
	return lineas->contarElementos();
}
void Entrada::cargarFerrocarriles(std::string archivoEstaciones)
{

	std::ifstream archivo;

	Estacion* estacionActual = NULL;
	Linea* lineaActual = new Linea;
	Coordenada ubicacionActual;

	archivo.open(archivoEstaciones);
	if(!archivo.is_open())
	{
		std::cout<<"Error al abrir el archivo de estaciones de Ferrocarriles"<<std::endl;
		return;
	}
	archivo.ignore(1000,'\n');

	while(archivo.peek() != EOF)
	{
		/*
		 * Tomar una estacion de ferrocarril completa
		 */
		double longitud = textoaNumero(leerCampo(archivo));
		double latitud = textoaNumero(leerCampo(archivo));
		int identificador = textoaNumero(leerCampo(archivo));
		std::string nombre = leerCampo(archivo);
		std::string linea = leerCampo(archivo);
		std::string linea2 = leerCampo(archivo);
		std::string ramal = leerCampo(archivo);
		std::string barrio = leerCampo(archivo);
		std::string comuna = leerCampo(archivo);
		std::string localidad = leerCampo(archivo);
		std::string partido = leerCampo(archivo);

		ubicacionActual.setLatitud(latitud);
		ubicacionActual.setLongitud(longitud);
		estacionActual = new Estacion(linea,nombre,ubicacionActual,"SIN COMBINACIONES","TREN");


		if(lineaActual->estaVacia()){
			lineaActual->setNombre(linea);
			lineaActual->setRamal(ramal);

		}
		else if(!lineaActual->lineaCoincide(linea)){
			agregarLinea(lineaActual);
			lineaActual = new Linea(linea,ramal);
		}
		lineaActual->agregarEstacion(estacionActual);

	}
	archivo.close();
}
Lista<Linea*>* Entrada::getLineas(){
	return this->lineas;
}

std::string Entrada::leerCampo(std::ifstream& archivo)
{
	std::string cadena;
	cadena.reserve(30);
	char caracter;

	while((caracter = archivo.get()) != ',' && caracter != '\n')
	{
		cadena += caracter;
	}
	return cadena;
}
double Entrada::textoaNumero(std::string texto)
{
	double textoConvertido;
	std::istringstream convertir(texto);

	if (!(convertir >> textoConvertido))
	{
		std::cout<<"Error al convertir numero en formato de texto"<<std::endl;
		return 0;
	}
	return textoConvertido;
}
