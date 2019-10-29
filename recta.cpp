/*	CONSTRUIR RECTA A PARTIR DE 2 PUNTOS:
 * 
 *  Resta 2 vectores, a esa diferencia la multiplica por un parametro muy pequeño
 * 	y al resultado lo desplaza a la recta que pasa por p1 y p2.
 * 	A medida que el parametro aumenta el vector diferencia se hace mas grande hasta
 * 	que el punto-vector diferencia acabe en p2.
 *	Mientras mas chico el parametro, mas precision al dibujar la recta.
 * 	
 * 	pre: no hace control de errores en cuanto a la entrada de los puntos
 * 	pos: escribe en pantalla o genera todos los puntos que conforman la recta entre
 * 	p1 y p2.

 */

void recta(Punto p1, Punto p2, pantalla o contenedor) {
	Punto vector_diferencia = p1 - p2; 
	float parametro = 0.0f;
	Punto vector_desplazado;

	do {

		vector_desplazado = vector_diferencia * parametro + p2; 
		Escribir en pantalla o guardar los puntos que conforman la recta en contenedor
		paramametro += 0.01f; 
	} 	while (parametro <= 1);
}