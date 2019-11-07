
#include <iostream>
#include "Linea.h"
#include "Entrada.h"
using namespace std;


int main(){
	Entrada* cargaDatos = new Entrada;
	Linea* lineaActual = new Linea;

	cargaDatos->cargarFerrocarriles("src/ferrocarril.csv");
	for(unsigned int i=1; i<cargaDatos->getTotalLineas(); i++){
		lineaActual = cargaDatos->getLinea(i);

		cout<<"Nombre : " <<lineaActual->getNombre()<<endl;
		cout<<"Ramal "<<lineaActual->getRamal()<<endl;
		cout<<endl;

	}



		cin.get();
	return 0;
}
