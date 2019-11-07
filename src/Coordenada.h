

class Coordenada{
private:
	double latitud;
	double longitud;

public:
	Coordenada(double& latitud, double& longitud);
	Coordenada();
	double& getLatitud() ;
	double& getLongitud() ;

	void setLatitud(double& latitud);
	void setLongitud(double& longitud);

	double distancia(Coordenada& otra) ;

};

