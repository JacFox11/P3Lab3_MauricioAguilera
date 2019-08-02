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
		vector<Animal*> articos;
		vector<Animal*> deserticos;
		vector<Animal*> tropicales;
		vector<Animal*> sabanas;
		
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
	    
	    void setArticos(vector<Animal*> articos){
	    	this->articos = articos;
		}
		
		void setArtico(Animal* animal){
			this->articos.push_back(animal); 
		}
		
		vector<Animal*> getArticos(){
			return articos;
		}
		
		void remArtico(int p){
			articos.erase(articos.begin() + p); 
		}
		
		void setDeserticos(vector<Animal*> deserticos){
	    	this->deserticos = deserticos;
		}
		
		void setDesertico(Animal* animal){
			this->deserticos.push_back(animal); 
		}
		
		vector<Animal*> getDeserticos(){
			return deserticos;
		}
		
		void remDesertico(int p){
			deserticos.erase(deserticos.begin() + p); 
		}
		
		void setTropicales(vector<Animal*> tropicales){
	    	this->tropicales = tropicales;
		}
		
		void setTropical(Animal* animal){
			this->tropicales.push_back(animal); 
		}
		
		vector<Animal*> getTropicales(){
			return tropicales;
		}
		
		void remTropical(int p){
			tropicales.erase(tropicales.begin() + p); 
		}
		
		void setSabanas(vector<Animal*> sabanas){
	    	this->sabanas = sabanas;
		}
		
		void setSabana(Animal* animal){
			this->sabanas.push_back(animal); 
		}
		
		vector<Animal*> getSabanas(){
			return sabanas;
		}
		
		void remSabana(int p){
			sabanas.erase(sabanas.begin() + p); 
		}
		
		~Zoologico(){
		}
};

#endif
