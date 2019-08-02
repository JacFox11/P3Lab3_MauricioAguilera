#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Alumno.cpp"
#include "Maestro.cpp"

class Alumno;
class Maestro;


#ifndef Clase_CPP
#define Clase_CPP
using namespace std;

class Clase{
	private:
		string nombre;
		string id;
		int capacidad;
		int actual;
		Maestro* maestro;
		vector<Alumno*> alumnos;
	public:
		Clase() {
	    }
	
	    Clase(string nombre, string id, int cantidad, int actual, Maestro* maestro) {
	        this->nombre = nombre;
	        this->id = id;
	        this->cantidad = cantidad;
	        this->actual = actual;
	        this->maestro = maestro;
	        this->carrera = carrera;
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    string getId() {
	        return id;
	    }
	
	    void setId(string id) {
	        this->id = id;
	    }
	
	    int getCantidad() {
	        return cantidad;
	    }
	
	    void setCantidad(int cantidad) {
	        this->cantidad = cantidad;
	    }
	
	    int getActual() {
	        return actual;
	    }
	
	    void setActual(int actual) {
	        this->actual = actual;
	    }
	
	    char getMaestro() {
	        return maestro;
	    }
	
	    void setMaestro(Maestro* maestro) {
	        this->maestro = maestro;
	    }
	    
	    void setAlumnos(vector<Alumno*> alumnos){
	    	this->alumnos = alumnos;
		}
		
		void setAlumno(Alumno* clase){
			this->alumnos.push_back(clase); 
		}
		
		vector<Alumno*> getAlumnos(){
			return alumnos;
		}
		
		void remAlumno(int p){
			alumnos.erase(alumnos.begin() + p); 
		}
};

#endif
