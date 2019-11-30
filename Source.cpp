/*
Proyecto Volterra
Walter Humphrey
A01701730
03/12/2019
*/

/*
Este programa tiene la capacidad de mostrar a los
personajes seleccionables de entre 3 categorías.
Los personajes tienen una habilidad que aumenta su ataque y defensa.
Dichos personajes deben destruir diversas barreras para ganar.
*/

//Bibliotecas
#include<iostream>
#include"Personajes.h"
#include "Barrera.h"
using namespace std;

//Procedimiento
int main() {
	// Se crean los personajes y la barrera
	Asesino Personaje1("Ezio");
	Mago Personaje2("Gandalf");
	Caballero Personaje3("Lancelot");
	Barrera Barrera1(10000, "Metal");

	// Se desglosa el nombre, ataque y defensa de los personajes
	cout << " Personaje: " << Personaje1.get_nombre()
		<< " \n Ataque: " << Personaje1.get_ataque()
		<< " \n Defensa: " << Personaje1.get_defensa()
		<< "\n";
	
	cout << " Personaje: " << Personaje2.get_nombre()
		<< " \n Ataque: " << Personaje2.get_ataque()
		<< " \n Defensa: " << Personaje2.get_defensa()
		<< "\n";
	
	cout << " Personaje: " << Personaje3.get_nombre()
		<< " \n Ataque: " << Personaje3.get_ataque()
		<< " \n Defensa: " << Personaje3.get_defensa()
		<< "\n";

	// Se desglosa el tipo de barrera y nivel de resistencia
	cout << " Barrera tipo: " << Barrera1.get_tipo()
		<< " \n Resistencia: " << Barrera1.get_resistencia()
		<< "\n";

	// Los personajes atacan a la barrera y Gandalf hace uso de su habilidad
	cout << " Ezio ataca! ";
	Personaje1.ataca_barrera(Barrera1);
	cout << " \n Resistencia de la barrera: " << Barrera1.get_resistencia()
		<< "\n";

	cout << " Gandalf usa un hecizo y ataca! ";
	Personaje2.habilidad_hechizo();
	Personaje2.ataca_barrera(Barrera1);
	cout << " \n Resistencia de la barrera: " << Barrera1.get_resistencia()
		<< "\n";

	return 0;
}