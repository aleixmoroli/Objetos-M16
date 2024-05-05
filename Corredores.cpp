#include "Corredores.h"

int Corredores::getvelocidad()
{
	return velocidad;
}

void Corredores::setVelocidad(int pVelocidad)
{
	velocidad = pVelocidad;
}

int Corredores::getdistancia()
{
	return distancia_recorrida;
}

void Corredores::setdistancia(int pdistancia)
{
	distancia_recorrida = pdistancia;
}

int Corredores::getnitro()
{
	return nitro;
}

void Corredores::setnitro(int pnitro)
{
	nitro = pnitro;
}

int Corredores::getdado()
{
	return dado;
}

void Corredores::setdado(int pdado)
{
	dado = pdado;
}

string Corredores::getnombre()
{
	return nombre_corredor;
}

void Corredores::setnombre(string pnombre)
{
	nombre_corredor = pnombre;
}

void Corredores::getCorredor()
{
	cout << "Nombre: " << nombre_corredor << "\nVelocidad: " << velocidad << "\nDistancia Recorrida: " << distancia_recorrida << "\nNitro: " << nitro;
}

Corredores::Corredores()
{
	nombre_corredor = "?";
	velocidad = 0;
	distancia_recorrida = 0;
	nitro = 1;
}

Corredores::Corredores(int pVelocidad, int pdistancia, int pnitro, int pdado, string pnombre)
{
	velocidad = pVelocidad;
	distancia_recorrida = pdistancia;
	nitro = pnitro;
	dado = pdado;
	nombre_corredor = pnombre;
}






