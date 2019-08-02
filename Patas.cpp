#include<iostream>
#include<iomanip> 
#include <string.h>
#include <bits/stdc++.h>

#ifndef Patas_CPP
#define Patas_CPP
using namespace std;

class Patas{
	private:
		int cantidad;
		int largo;
		string tipo;
		
	public:
		Patas() {
	    }
	    
	    Patas(int cantidad, string nombre, int largo, string tipo) {
	    	this->cantidad = cantidad;
	    	this->largo = largo;
	    	this->tipo = tipo;
	    }
	
	    int getCantidad() {
	        return cantidad;
	    }
	
	    void setCantidad(int cantidad) {
	        this->cantidad = cantidad;
	    }
	
	    int getLargo() {
	        return largo;
	    }
	
	    void setLargo(int largo) {
	        this->largo = largo;
	    }
	    
	    string getTipo() {
	        return tipo;
	    }
	
	    void setTipo(string tipo) {
	        this->tipo = tipo;
	    }
	    
	    ~Patas(){
		}
};

#endif
