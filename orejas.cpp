#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Orejas_CPP
#define Orejas_CPP
using namespace std;

class Orejas{
	private:
		int cantidad;
		int tamano;
		
	public:
		Orejas() {
	    }
	    
	    Orejas(int cantidad, string nombre, int tamano) {
	    	this->cantidad = cantidad;
	    	this->tamano = tamano;
	    }
	
	    int getCantidad() {
	        return cantidad;
	    }
	
	    void setCantidad(int cantidad) {
	        this->cantidad = cantidad;
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
