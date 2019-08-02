#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Orejas_CPP
#define Orejas_CPP
using namespace std;

class Orejas{
	private:
		bool capacidad;
		int tamano;
		
	public:
		Orejas() {
	    }
	    
	    Orejas(bool capacidad, int tamano) {
	    	this->capacidad = capacidad;
	    	this->tamano = tamano;
	    }
	
	    bool getCapacidad() {
	        return capacidad;
	    }
	
	    void setCapacidad(bool capacidad) {
	        this->capacidad = capacidad;
	    }
	
	    int getTamano() {
	        return tamano;
	    }
	
	    void setTamano(int tamano) {
	        this->tamano = tamano;
	    }
	    
	    ~Orejas(){
		}
};

#endif
