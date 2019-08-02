#include<iostream>
#include<iomanip> 
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include "Animal.cpp"

#ifndef Zoologico_CPP
#define Zoologico_CPP
using namespace std;

class Zoologico{
	private:
		string nombre;
		int tamano;
		int capacidad;
		vector<Animal*> artica;
		vector<Animal*> desertica;
		vector<Animal*> tropical;
		vector<Animal*> sabana;
		
	public:
		Zoologico() {
	    }
	    
	    Zoologico(string nombre, int tamano, int capacidad) {
	    	this->nombre = nombre;
	    	this->tamano = tamano;
	    	this->capacidad = capacidad;
	    	
	    }
	
	    string getNombre() {
	        return nombre;
	    }
	
	    void setNombre(string nombre) {
	        this->nombre = nombre;
	    }
	
	    int getTamano() {
	        return tamano;
	    }
	
	    void setTamano(int tamano) {
	        this->tamano = tamano;
	    }
	    
	    int getCapacidad() {
	        return capacidad;
	    }
	
	    void setCapacidad(int capacidad) {
	        this->capacidad = capacidad;
	    }
	    
	    void setArtica(vector<Animal*> artica){
	    	this->artica = artica;
		}
		
		void setAnimal(Animal* animal){
			this->artica.push_back(animal); 
		}
		
		vector<Animal*> getArtica(){
			return artica;
		}
		
		void remAnimal(int p){
			artica.erase(artica.begin() + p); 
		}
};

#endif
