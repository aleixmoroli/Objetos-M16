#pragma once

#include <iostream>

using namespace std;

class Corredores
{
	private:
		int velocidad;
		int distancia_recorrida;
		int nitro;
		int dado;
		string nombre_corredor;

	public:
		int getvelocidad();
		void setVelocidad(int pVelocidad);
		int getdistancia();
		void setdistancia(int pdistancia);
		int getnitro();
		void setnitro(int pnitro);
		int getdado();
		void setdado(int pdado);
		string getnombre();
		void setnombre(string pnombre);
		void getCorredor();
		Corredores();
		Corredores(int pVelocidad, int pdistancia, int pnitro, int pdado, string pnombre);
};