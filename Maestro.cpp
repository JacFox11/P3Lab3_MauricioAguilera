#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Clase.cpp"


class Clase;

#ifndef Maestro_CPP
#define maestro_CPP
using namespace std;

class Maestro{
	private:
		string nombre;
		string user;
		string pass;
		string unipre;
		string profesion;
		vector<Clase*> clases;
	public:
		Maestro() {
	    }
	
	    Maestro(string nombre, string user, string pass, string unipre, char genero, string profesion) {
	        this->nombre = nombre;
	        this->user = user;
	        this->pass = pass;
	        this->unipre = unipre;
	        this->genero = genero;
	        this->profesion = profesion;
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
	
	    string getEdad() {
	        return unipre;
	    }
	
	    void setEdad(string unipre) {
	        this->unipre = unipre;
	    }
	
	    char getGenero() {
	        return genero;
	    }
	
	    void setGenero(char genero) {
	        this->genero = genero;
	    }
	
	    string getCarrera() {
	        return profesion;
	    }
	
	    void setCarrera(string profesion) {
	        this->profesion = profesion;
	    }
	    
	    void setClases(vector<Clase*> clases){
	    	this->clases = clases;
		}
		
		void setClase(Clase* clase){
			this->clases.push_back(clase); 
		}
		
		vector<Clase*> getClases(){
			return clases;
		}
		
		void remClase(int p){
			clases.erase(clases.begin() + p); 
		}
};

#endif
