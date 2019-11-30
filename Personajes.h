/*
Proyecto Volterra
Walter Humphrey
A01701730
28/11/2019
*/

#pragma once
#include<iostream>
#include "Barrera.h"
using namespace std;

//Se crea la clase para personajes
class Personajes {
	//Se declaran las variables
protected:
	int ataque;
	int defensa;
	string nombre;

	//Se declaran los métodos
public:
	// Se declara el contructor para personajes
	Personajes(int atk, int def, string name) {
		ataque = atk;
		defensa = def;
		nombre = name;
	}
	int get_ataque() {
		return ataque;
	}
	int get_defensa() {
		return defensa;
	}
	string get_nombre() {
		return nombre;
	}
	void set_ataque(int atk) {
		ataque = atk;
	}
	void set_defensa(int def) {
		defensa = def;
	}
	void set_nombre(string name) {
		nombre = name;
	}
	// Funcion de atacar a la barrera que usaran todos los personajes
	void ataca_barrera(Barrera &b) {
		b.daño_resistencia(ataque);
	}
};

//Se crea la clase de asesino heredando de personajes
class Asesino : public Personajes {
public:
	Asesino(string name):Personajes(500, 250,name) {

	}
	void habilidad_sigilo();
};

//Funcion de habilidad
void Asesino::habilidad_sigilo() {
	set_ataque(650);
	set_defensa(200);
}

//Se crea la clase de mago heredando de personajes
class Mago : public Personajes {
public:
	Mago(string name) :Personajes(600, 300, name) {
	}
	void habilidad_hechizo();
};

//Funcion de habilidad
void Mago::habilidad_hechizo() {
	set_ataque(1000);
	set_defensa(100);
}

//Se crea la clase de caballero heredando de personajes
class Caballero : public Personajes {
public:
	Caballero(string name) :Personajes(700, 400, name) {
	}
	void habilidad_fuerza();
};

//Funcion de habilidad
void Caballero::habilidad_fuerza() {
	set_ataque(800);
	set_defensa(600);
}