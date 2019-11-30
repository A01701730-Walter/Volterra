/*
Proyecto Volterra
Walter Humphrey
A01701730
28/11/2019
*/

#pragma once
#include<iostream>
using namespace std;

// Se crea la clase de barrera
class Barrera {
	// Se declaran las variables
private:
	int resistencia;
	string tipo;

	// Se declaran los métodos
public:
	// Se declara el contructor para personajes
	Barrera(int res, string type) {
		resistencia = res;
		tipo = type;
	}
	int get_resistencia() {
		return resistencia;
	}
	string get_tipo() {
		return tipo;
	}
	void set_resistencia(int res) {
		resistencia = res;
	}
	void set_tipo(string type) {
		tipo = type;
	}
	void daño_resistencia(int daño) {
		resistencia = resistencia - daño;
	}
};