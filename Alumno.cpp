#include<iostream>
#include<iomanip> 
#include <string.h>
#include "Clase.cpp"

class Clase;

#ifndef Alumno_CPP
#define Alumno_CPP
using namespace std;

class Alumno{
	private:
		string nombre;
		string user;
		string pass;
		int edad;
		char genero;
		string carrera;
		vector<Clase*> clases;
	public:
		Alumno() {
	    }
	
	    Alumno(string nombre, string user, string pass, int edad, char genero, string carrera) {
	        this->nombre = nombre;
	        this->user = user;
	        this->pass = pass;
	        this->edad = edad;
	        this->genero = genero;
	        this->carrera = carrera;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getUser() {
	        return user;
	    }
	
	    void setUser(string user) {
	        this->user = user;
	    }
	
	    string getPass() {
	        return pass;
	    }
	
	    void setPass(string pass) {
	        this->pass = pass;
	    }
	
	    int getEdad() {
	        return edad;
	    }
	
	    void setEdad(int edad) {
	        this->edad = edad;
	    }
	
	    char getGenero() {
	        return genero;
	    }
	
	    void setGenero(char genero) {
	        this->genero = genero;
	    }
	
	    string getCarrera() {
	        return carrera;
	    }
	
	    void setCarrera(string carrera) {
	        this->carrera = carrera;
	    }
};

#endif
