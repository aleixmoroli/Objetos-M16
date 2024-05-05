// M16_Pr6(Videojuego_Desarrollador).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Corredores.h"
#include <stdlib.h>

using namespace std;

int main()
{
	Corredores corredor1;

	corredor1.setVelocidad(330);
	corredor1.setdistancia(290);
	corredor1.setnitro(550);
	corredor1.setnombre("Ford GT");
	corredor1.getCorredor();

	Corredores corredor2;
	corredor2.setVelocidad(329);
	corredor2.setdistancia(5193);
	corredor2.setnitro(50);
	corredor2.setnombre("Dodge Challenger Concept");
	corredor2.getCorredor();

	Corredores corredor3;
	corredor3.setVelocidad(369);
	corredor3.setdistancia(233);
	corredor3.setnitro(22);
	corredor3.setnombre("Chevrolet Corvette C6 ZR1");
	corredor3.getCorredor();

	Corredores corredor4;
	corredor4.setVelocidad(369);
	corredor4.setdistancia(233);
	corredor4.setnitro(22);
	corredor4.setnombre("Porsche 919");
	corredor4.getCorredor();

	Corredores corredor5;
	corredor5.setVelocidad(369);
	corredor5.setdistancia(233);
	corredor5.setnitro(22);
	corredor5.setnombre("Porsche 919");
	corredor5.getCorredor();

	Corredores corredor6;
	corredor6.setVelocidad(369);
	corredor6.setdistancia(233);
	corredor6.setnitro(22);
	corredor6.setnombre("Porsche 919");
	corredor6.getCorredor();

	int opciones;
	int dado = 0;
	do {
		dado = dado + corredor1(dado); //add the score from a new turn to the running total
		cout << "Your total score so far is " << dado << "." << endl;
		if (dado >= 100)
		{
			cout << "Has ganado!";
			break;
		}
	}

	switch (opciones)
	{
	case 1:
		dado = 1 + rand() % 6;
		break;
	case 2:
		break;
	case 3:
		Velocidad(15) = Velocidad(5) + dado(20);
		break;
	case 4:
		nitro = ()
	case 5:
		getDistancia = setDistancia + getVelocidad * 100;
	default:
		break;
	}
else {

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
